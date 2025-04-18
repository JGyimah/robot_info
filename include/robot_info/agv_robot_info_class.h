#ifndef AGV_ROBOT_INFO_H
#define AGV_ROBOT_INFO_H

#include "robot_info/robot_info_class.h"
#include <string>

class AGVRobotInfo : public RobotInfo{

    protected:
        std::string maximum_payload;

    public:
        AGVRobotInfo(ros::NodeHandle nh);
    
        ~AGVRobotInfo();
        
        void publish_data() override;
};

#endif