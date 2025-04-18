#ifndef HYDRAULIC_SYSTEM_MONITOR_H
#define HYDRAULIC_SYSTEM_MONITOR_H

#include <string>
#include <vector>

class HydraulicSystemMonitor{

    public:
        HydraulicSystemMonitor();
        
        ~HydraulicSystemMonitor();

        //Hydaulic system member variables
        std::string hydraulic_oil_temperature;
        std::string hydraulic_oil_tank_fill_level;
        std::string hydraulic_oil_pressure;

        //retrieve data collectively
        std::vector<std::string> get_hydraulic_data();
};

#endif