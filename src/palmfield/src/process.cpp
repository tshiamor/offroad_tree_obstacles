#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_econdings.h>


#include <string>

// 20230420_031736000_iOS
using namespace std;
using namespace cv::dnn;

Net net;
vector<Mat> detections;

std::string VideoPath = "~/20230420_031736000_iOS.MOV";

int main (){

    ros:init(argc,argv, "process");
    ros NodeHandle nh;

    net = readNet("../best.onnx"); //load model file

    cv::VideoCapture capture(VideoPath);
    if(capture.isOpened()){
        ROS_ERROR("could not find file");
        ros::shutdown();
    }
    image_transport::ImageTransport it(nh);
    image_transport::Publisher pub_frame = it.advertise("rtImage", 1);

    cv::Mat frame;
    sensor_msgs::ImagePtr message;

    ros::rate loop_rate(10);

    while(nh.ok()){

        capture >> frame;
        if (frame.empty()) {
            ROS_ERROR_STREAM("failed to extract frame...");
            ros::shutdown();
        }
      }
      message = cv_bridge::CvImage(std_msgs::Header(), "bgr8", frame).toImageMsg();
      pub_frame.publish(message);

      cv::waitKey(1); 
      ros::spinOnce();
      loop_rate.sleep();
    }




  capture.release();  
}