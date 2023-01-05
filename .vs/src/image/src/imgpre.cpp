#include"rclcpp/rclcpp.hpp"
#include"opencv4/opencv2/opencv.hpp"
#include"opencv4/opencv2/highgui.hpp"
#include"opencv4/opencv2/imgproc.hpp"
#include"video_interfaces/msg/pos.hpp"
#include"video_interfaces/msg/kmf.hpp"
#include"video_interfaces/msg/kmfs.hpp"
#include"video_interfaces/srv/kmf.hpp"
#include"sensor_msgs/msg/image.hpp"
#include"cv_bridge/cv_bridge.h"
#include"image_transport/image_transport.hpp"

class imgpre : public rclcpp::Node{
public:
    imgpre(std::string name): Node(name){
        RCLCPP_INFO(get_logger(), "开始");//当个标志确定下程序可以运行

        //三个发布，一个给vido_kmf发送数据， 另一个给ved_select发布，还有一个用image_transport发布图片数据（没弄订阅端）
        pub_pos=this->create_publisher<video_interfaces::msg::Pos>("pub_pos", 10);
        kmf_pub=this->create_publisher<video_interfaces::msg::Kmfs>("kmf_pub", 10);
        img_pub=image_transport::create_publisher(this, "out_image_base_topic", rmw_qos_profile_default);

        //video抓取视频
        cv::VideoCapture video;
        std::string path="/home/mfz/Videos/b.avi";
        video_interfaces::msg::Kmfs kmf_mes;
        video.open(path);
        cv::Mat img;
        for(;;){
            std::vector<std::vector<cv::Point>> contours, rota_fin;//存放findcontours的点
            video.read(img);
            if(img.empty()){
                break;
            }//读完视频后结束

            //定义内参矩阵和畸变矩阵，用于畸变矫正
            float a[3][3]={1581.3689, 0,  643.895829, 0,  1581.7493, 501.018964, 0, 0, 1};
            float b[5]={-0.079467705101947, 0.221427612817039, 0, 0, -0.018273047319637};
            cv::Mat camera_matrix(3, 3, CV_32F, a);
            cv::Mat intrinsic_matrix(5, 0, CV_32F, b);
            cv::undistort(img, imgk,camera_matrix, intrinsic_matrix );//畸变矫正

            //先高斯模糊一下，在转灰度图再二值化，最后再膨胀来对图片初步处理
            cv::GaussianBlur(imgk, imgj, cv::Size(3, 3), 5);
            cv::cvtColor(imgj, img1, cv::COLOR_BGR2GRAY);
            cv::threshold(img1, th1, 90, 255, cv::THRESH_BINARY);
            cv::dilate(th1, th1, element);
            
            
            cv::findContours(th1, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_NONE);//用findcontours找出边缘点，存入contours中

            //先用minAreaRect找出每一部分空白的最小外接矩形
            cv::RotatedRect rota, rota_n;
            for(long unsigned int i=0; i<contours.size(); ++i){
                rota=cv::minAreaRect(cv::Mat(contours[i]));
                //根据矩形的角度长宽比和面积初步筛掉明显不是灯条的部分
                bool c_angle1=(fabs(rota.angle)<45.0)&&rota.size.height>rota.size.width;
                bool c_angle2=(fabs(rota.angle)>60.0)&&rota.size.width>rota.size.height;
                bool c_ratio=((rota.size.height/rota.size.width)>1.38)||((rota.size.height/rota.size.width)<0.65);
                bool c_area=(rota.size.height*rota.size.width>35);
                if((c_angle1==true||c_angle2==true)&&(c_ratio==true)&&(c_area==true)){
                    rota_fin.push_back(contours[i]);//rota_fin里存放没被淘汰的选手
            
                }   
            }
            
            float size, size_max=0;
            
            p3=cv::Point2f(0, 0);
            p4=cv::Point2f(0, 0);//伪初始化
            float r1, r2, r3, x1, x2, y;
            float width, height, angle;
            for(long unsigned int i=0; i<rota_fin.size(); i++){
                for(long unsigned int j=i+1; j<rota_fin.size(); j++){
                    //暴力匹配每个部分挨个看一下
                    rota=cv::minAreaRect(cv::Mat(rota_fin[i]));
                    rota_n=cv::minAreaRect(cv::Mat(rota_fin[j]));
                    r1=MAX(rota.size.height, rota.size.width);
                    r2=MAX(rota_n.size.height, rota_n.size.width);
                    r3=MAX(r1, r2);//貌似minAreaRect最后给的width和height是乱的，直接找最长的边
                    bool r_angle=(fabs(rota.angle-rota_n.angle)<10);
                    bool r_h=(fabs(rota.size.height-rota_n.size.height)<15);
                    bool r_w=(fabs(rota.size.width-rota_n.size.width)<15);
                    bool r_ratio1=(fabs(rota.center.x-rota_n.center.x)/r3<3.2&&fabs(rota.center.x-rota_n.center.x)/r3>0.9);
                    bool r_y=(fabs(rota.center.y-rota_n.center.y)<55);
                    //从角度差，宽度差高度差，整个装甲板的宽和灯条的高比值，两部分的高差来匹配灯条
                    if(r_angle==true&&r_y==true&&r_ratio1==true&&(r_h==true&&r_w==true)){
                        x1=MIN(rota.center.x, rota_n.center.x);
                        x2=MAX(rota.center.x, rota_n.center.x);
                        y=(rota.center.y+rota_n.center.y)/2;
                        p1=cv::Point2f(x1, y-r3); 
                        p2=cv::Point2f(x2, y+r3);                    
                        size=fabs(rota.center.x-rota_n.center.x)*r3;//同时记录面积，用p3 p4来保存面积最大的那个
                        if(size>size_max){
                            size_max=size;
                            p3.x=p1.x;
                            p3.y=p1.y;
                            p4.x=p2.x;
                            p4.y=p2.y;
                            width=rota.size.width;
                            height=rota.size.height;
                            angle=(rota.angle+rota_n.angle)/2;//记录好角度，宽和高以便一同发给ved_select来进行姿态解算
                        }
                        
                    }
                }
            }
            
            
            pos_pub.x1=p3.x;
            pos_pub.y1=p3.y;
            pos_pub.x2=p4.x;
            pos_pub.y2=p4.y;
            pos_pub.height=height;
            pos_pub.width=width;
            pos_pub.angle=angle;
            kmf_mes.x1=p3.x;
            kmf_mes.y1=p3.y;
            kmf_mes.x2=p4.x;
            kmf_mes.y2=p4.y;
            //准备好要发布的两部分的数据
            if(p3.x!=0&&p3.y!=0&&p4.x!=0&&p4.y!=0){
                //当有值时才发布
                pub_pos->publish(pos_pub);
                
                kmf_pub->publish(kmf_mes);

            }
            //根据p3 p4的点将二值化的图中对应的部分裁下来并发布
            /*cv::threshold(img, th2, 20, 255, cv::THRESH_BINARY);
            int x_crop=int(p3.x);
            int y_crop=int(p3.y);
            int wid=int(p4.x-p4.x);
            int high=int(p4.y-p3.y);
            cv::Rect roi(x_crop, y_crop, wid, high);
            cv::Mat digital_crop;
            digital_crop=th2(roi);


            //先用cv_bridge将opencv图片转化为指向sensor_msgs::msg::Image的智能指针
            sensor_msgs::msg::Image::SharedPtr msg;
            msg=cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", digital_crop).toImageMsg();
            //用专门的image_transport来传输
            img_pub.publish(msg);*/
            
            
            //最后画框并展示图片
            cv::rectangle(img, p3, p4, cv::Scalar(0, 0, 255), 2);
            cv::imshow("demo1", img);
            cv::waitKey(5);
        }
        video.release();
        cv::destroyAllWindows();
    }
    
    
    
private:
    

image_transport::Publisher img_pub;
rclcpp::CallbackGroup::SharedPtr call_back;
cv::Point2f p1, p2, p3, p4;
cv::Mat img1, th1, th2, imgj, imgk ,img_middle_th1, img_middle_pre, img_crop;
cv::Mat element = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(7, 7));
video_interfaces::msg::Pos pos_pub;
video_interfaces::srv::Kmf kmf;
rclcpp::Publisher<video_interfaces::msg::Pos>::SharedPtr pub_pos;
rclcpp::Subscription<video_interfaces::msg::Kmf>::SharedPtr kmf_sub;
rclcpp::Publisher<video_interfaces::msg::Kmfs>::SharedPtr kmf_pub;

};


int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node=std::make_shared<imgpre>("imgpre");
    //本来想尝试多线程的
    rclcpp::executors::MultiThreadedExecutor executors;
    executors.add_node(node);
    executors.spin();
    rclcpp::shutdown();
    return 0;
}