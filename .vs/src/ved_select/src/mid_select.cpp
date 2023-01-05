
#include"rclcpp/rclcpp.hpp"
#include"cv_bridge/cv_bridge.h"
#include"sensor_msgs/msg/image.h"
#include"video_interfaces/msg/pos.hpp"
#include"video_interfaces/msg/image.hpp"
#include"std_msgs/msg/float32.hpp"
#include"eigen3/Eigen/Core"
#include"eigen3/Eigen/Geometry"
#include"eigen3/Eigen/Eigen"
#include"eigen3/Eigen/Dense"
#include"opencv4/opencv2/imgproc.hpp"
#include"opencv4/opencv2/highgui.hpp"
#include"opencv4/opencv2/opencv.hpp"
#include"opencv2/core/eigen.hpp"
#include"video_interfaces/msg/send.hpp"



class viselect: public rclcpp::Node{
public:
    viselect(std::string name):Node(name){
        RCLCPP_INFO(get_logger(), "中段开始处理");
        pub_send=this->create_publisher<video_interfaces::msg::Send>("pos_send", 10);
        sub_th1=this->create_subscription<video_interfaces::msg::Pos>("pub_pos", 10, std::bind(&viselect::select_callback, this, std::placeholders::_1));
        
    }
private:
void select_callback(const video_interfaces::msg::Pos pos1){
    
    in_Dim.clear();
    out_Dim.clear();//用的是vector，每次开始前要先清空一下

    
    cv::Mat rvec;
    cv::Mat tvec;
    cv::Mat rvec_dis;
    //将订阅的数据取出来
    p1.x=pos1.x1;
    p1.y=pos1.y1;
    p2.x=pos1.x1;
    p2.y=pos1.y2;
    p3.x=pos1.x2;
    p3.y=pos1.y2;
    p4.x=pos1.x2;
    p4.y=pos1.y1;

    //找出框的中点
    center_x=(pos1.x1+pos1.x2)/2;
    center_y=(pos1.y1+pos1.y2)/2;
    //灯条光会让识别到的比灯条实际尺寸大，所以先适当缩小
    height=pos1.height*0.8;
    width=pos1.width*0.8;
    //取出长和宽的值
    r_k=MIN(height, width);
    r_g=MAX(height, width);
    //将相继坐标下的框的四个点存入，后面solvepnp用
    in_Dim.push_back(p1);
    in_Dim.push_back(p2);
    in_Dim.push_back(p3);
    in_Dim.push_back(p4);

    //存入长宽根据长宽比判断是大装甲板还是小装甲板
    height_width.x=fabs(pos1.x1-pos1.x2);
    height_width.y=fabs(pos1.y1-pos1.y2);
    ratio=height_width.x/height_width.y;
    ratio_small=fabs(ratio-1);
    ratio_big=fabs(ratio-3);

    //利用公式F（焦距）=P（图上像素点个数）*W（距离）/W（物体实际长度）来求距离
    g=6.35;
    k=1.20;
    z1=f*g/r_g;
    z2=f*k/r_k;
    z_fin=(z1+z2)/2;
    if(ratio_small>ratio_big){
        //大装甲板上对应点的坐标
        p1_d=cv::Point3d(-11.5, -6.35, z_fin);
        p2_d=cv::Point3d(-11.5, 6.35, z_fin);
        p3_d=cv::Point3d(11.5,6.35, z_fin);
        p4_d=cv::Point3d(11.5, -6.35, z_fin);
    }else{
        //小装甲板上对应点的坐标
        p1_d=cv::Point3d(-6.75, -6.25, z_fin);
        p2_d=cv::Point3d(-6.75, 6.25, z_fin);
        p3_d=cv::Point3d(6.75, 6.25, z_fin);
        p4_d=cv::Point3d(6.75, -6.25, z_fin);
    }
    RCLCPP_INFO(get_logger(), "距离：%f", z_fin);

    //用opencv solvepnp函数求解姿态
    out_Dim.push_back(p1_d);
    out_Dim.push_back(p2_d);
    out_Dim.push_back(p3_d);
    out_Dim.push_back(p4_d);
    cv::solvePnP(out_Dim, in_Dim, camre_matrix, intrinsic_matrix, rvec, tvec);
    for(int i=0; i<3; i++){
        //将旋转向量和平移向量存入接口发布
        send.rvec[i]=rvec.at<float>(i);
        send.tvec[i]=tvec.at<float>(i);
    }
    send.dist=z_fin;//存入距离

    std::cout<<"旋转矩阵："<<std::endl<<rvec<<std::endl<<"平移："<<std::endl<<tvec<<std::endl;

    //先将旋转向量转化为旋转矩阵，再将旋转矩阵变为eigen矩阵，用eigen的函数转化为欧拉角
    cv::Rodrigues(rvec, rvec_dis);
    cv::cv2eigen(rvec_dis, R_eigen);
    Eigen::Vector3d zyx_Euler=R_eigen.eulerAngles(0, 1, 2);
    std::cout<<"pitch角度"<<(zyx_Euler[2]/3.1415)*180<<std::endl<<"roll角度"<<(zyx_Euler[0]/3.1415)*180<<std::endl;//求出来的欧拉角是弧度制，要再转换一下
    send.pitch=(zyx_Euler[2]/3.1415)*180;
    send.roll=(zyx_Euler[0]/3.14159)*180;
    pub_send->publish(send);
    
}
video_interfaces::msg::Send send;
rclcpp::Publisher<video_interfaces::msg::Send>::SharedPtr pub_send;
std_msgs::msg::Float32 dis;
double k, g, p_k, p_g, ratio, ratio_small, ratio_big, z1, z2, z_fin;
double f=1666.66;
cv::Point2d p1, p2, p3, p4, height_width;
cv::Point3d p1_d, p2_d, p3_d, p4_d;
rclcpp::Subscription<video_interfaces::msg::Pos>::SharedPtr sub_th1; 
float center_x, center_y, width, height, r_k, r_g;
std::vector<cv::Point2d>in_Dim;
std::vector<cv::Point3d>out_Dim;
float a[3][3]={1581.3689, 0,  643.895829, 0,  1581.7493, 501.018964, 0, 0, 1};
float b[5]={-0.079467705101947, 0.221427612817039, 0, 0, -0.018273047319637};
Eigen::Matrix3d R_eigen;
cv::Mat camre_matrix=cv::Mat(3, 3, CV_32FC1, a);
cv::Mat intrinsic_matrix=cv::Mat(1, 5, CV_32FC1, b);//设置内参矩阵和畸变矩阵，solvepnp用
};



int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node=std::make_shared<viselect>("viselect");
    rclcpp::executors::MultiThreadedExecutor executors;
    executors.add_node(node);
    executors.spin();
    rclcpp::shutdown();
    return 0;
}
