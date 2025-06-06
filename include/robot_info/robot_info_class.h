#ifndef ROBOT_INFO_H
#define ROBOT_INFO_H

#include <string>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "robotinfo_msgs/RobotInfo10Fields.h"

class RobotInfo{

    protected:
        std::string robot_description;
        std::string serial_number;
        std::string ip_address;
        std::string firmware_version;
        ros::Publisher publisher;

    public:
        RobotInfo(ros::NodeHandle nh);

        ~RobotInfo();

        virtual void publish_data();
};

#endif