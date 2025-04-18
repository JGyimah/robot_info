#ifndef AGV_ROBOT_INFO_H
#define AGV_ROBOT_INFO_H

#include <string>
#include "robot_info/robot_info_class.h"
#include "robot_info/hydraulic_system_monitor.h"

class AGVRobotInfo : public RobotInfo{

    protected:
        std::string maximum_payload;
        HydraulicSystemMonitor hydraulic_sys_monitor;

    public:
        AGVRobotInfo(ros::NodeHandle nh);
    
        ~AGVRobotInfo();
        
        void publish_data() override;
};

#endif