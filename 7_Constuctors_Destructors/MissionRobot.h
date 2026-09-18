#ifndef MISSION_ROBOT_H
#define MISSION_ROBOT_H

#include <string>

class MissionRobot
{
private:
    std::string model;
    int battery;
    int missions;

public:

    // Mutator
    void set_model(std::string model_name);

    // Overloaded constructors
    MissionRobot();
    MissionRobot(std::string model_name);
    MissionRobot(std::string model_name, int battery_level, int mission_count);

    // Destructor
    ~MissionRobot();
};

#endif

