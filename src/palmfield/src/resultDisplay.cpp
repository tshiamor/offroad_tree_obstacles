#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_econdings.h>


void Callback(const sensor_msgs::ImageConstptr & message) {
    cv_bridge::CvImagePtr cvPtr;
    

    try{
        cvptr = cv_bridge::toCop(mesage,"bgr8");

        //optional could check on rviz
        cv::Mat frame = cvPtr->image;
        cv::imshow("resultDisplayWindow");
        cv::waitKey(20);


    }catch(cv_bridge::Exception& err){

        ROS_ERROR("unable to get brg8")
    }

}

int main(argc, char *argv[] ){

    ros:init(argc,argv ,"resultDisplay");
    ros:::NodeHandle nh;
    image_transport::ImageTransport it(nh);

    image_transport::Subscriber sub = it.subscribe("rtImage", 1, Callback);

    ros::spin()
    cv::destroWindow("resultDisplayWindow");

}
