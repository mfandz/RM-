#include"rclcpp/rclcpp.hpp"
#include"cmath"
#include"opencv2/highgui.hpp"
#include"opencv2/core.hpp"
#include"opencv2/imgproc.hpp"
#include"opencv2/opencv.hpp"
#include"video_interfaces/msg/kmfs.hpp"
#include"video_interfaces/msg/kmf.hpp"
#include"iostream"
#include"sensor_msgs/msg/image.hpp"
#include"image_transport/image_transport.hpp"
#include"cv_bridge/cv_bridge.h"


class vid_predict: public rclcpp::Node{
public:
    vid_predict(std::string name):Node(name){
        RCLCPP_INFO(get_logger(), "胡诹开始");
        para_init();
        kmf_pub=this->create_publisher<video_interfaces::msg::Kmf>("kmf_sub", 10);
        kmf_sub=this->create_subscription<video_interfaces::msg::Kmfs>("kmf_pub", 10, std::bind(&vid_predict::KMF_predict, this, std::placeholders::_1));
        
        
        

    }
    void para_init(){
        //初始化各个参数， 更倚重观测的数据所以Q比R小很多
        //因为是图上坐标所以有X四个参数x,y,vx,vy，观测部分只有x,y两个
        Q=cv::Mat::eye(4, 4, CV_32F)*0.0001;
        R=0.01*cv::Mat::eye(2, 2, CV_32F);
        P_pre=cv::Mat::eye(4, 4, CV_32F);
        x_state=(cv::Mat_<float>(4, 1)<<100, 100, 0, 0);
        F=(cv::Mat_<float>(4, 4)<<1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1);
        K=cv::Mat::zeros(4, 4, CV_32F);
        H=cv::Mat::zeros(2, 4, CV_32F);
        temp=cv::Mat::zeros(4, 4, CV_32F);
        for(int i=0; i<2; i++){
            H.at<float>(i, i)=1;
        }
    }

private:
void KMF_predict(const video_interfaces::msg::Kmfs request){
    //将订阅的点转化为中心坐标
    center.x=(request.x1+request.x2)/2;
    center.y=(request.y1+request.y2)/2;
    p1.x=request.x1;
    p1.y=request.y1;
    p2.x=request.x2;
    p2.y=request.y2;
    
    //记录下长宽
    pos_long.x=fabs(request.x1-center.x);
    pos_long.y=fabs(request.y1-center.y);
    Z=(cv::Mat_<float>(2, 1)<<center.x, center.y);

    //根据求出理论上的X和协方差矩阵
    x_hat=F*x_state;
    P=F*P_pre*F.t()+Q;

    //求出卡尔曼系数K
    temp=H*P*H.t()+R;
    K=P*H.t()*temp.inv();

    //将X和协方差矩阵进行更新
    x_state=x_hat+K*(Z-H*x_hat);
    P_pre=(cv::Mat::eye(4, 4, CV_32F)-K*H)*P;

    //取出本次估计的坐标
    center_pre.x=x_state.at<float>(0);
    center_pre.y=x_state.at<float>(1);
    
    //根据坐标和长宽求出框的四个角的坐标
    response.x1=center_pre.x+pos_long.x;
    response.y1=center_pre.y+pos_long.y;
    response.x2=center_pre.x-pos_long.x;
    response.y2=center_pre.y-pos_long.y;
    //将数据发布
    p3.x=response.x1;
    p3.y=response.y1;
    p4.x=response.x2;
    p4.y=response.y2;
    kmf_pub->publish(response);
    std::cout<<"测量值x    测量值y"<<std::endl;
    std::cout<<center_pre.x<<"  "<<center_pre.y<<std::endl;
    std::cout<<"预估值x    预估值y"<<std::endl;
    std::cout<<center.x<<"  "<<center.y<<std::endl;
    
}



cv::Mat img_fin;
cv::Point2f p1, p2, p3, p4;
rclcpp::Node::SharedPtr node;
rclcpp::Subscription<video_interfaces::msg::Kmfs>::SharedPtr kmf_sub;
rclcpp::Publisher<video_interfaces::msg::Kmf>::SharedPtr kmf_pub;
cv::Mat Z;
cv::Point2f center, center_pre, pos_long;
cv::Mat Q, R, P, x_state, F, K, H, temp, x_hat, P_pre;
video_interfaces::msg::Kmf response;
};

int main(int argc, char** argv){
    rclcpp::init(argc, argv);
    auto node=std::make_shared<vid_predict>("kmf");
    
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}