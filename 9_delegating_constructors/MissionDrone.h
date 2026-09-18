#ifndef MISSION_DRONE_H
#define MISSION_DRONE_H

#include <string>

class MissionDrone
{
private:
    std::string model;
    int battery;
    int flight_hours;

public:
    // Overloaded constructors
    MissionDrone();
    MissionDrone(std::string model_name);
    MissionDrone(std::string model_name, int battery_level, int hours);
};

#endif

