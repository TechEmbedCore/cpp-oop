#include <iostream>
#include "MissionRobot.h"

using namespace std;


// Mutator
void MissionRobot::set_model(std::string model_name)
{
    model = model_name;
}


// =====================================================
// CONSTRUCTORS
// =====================================================

// No-argument constructor
MissionRobot::MissionRobot()
{
    cout << "No args constructor called" << endl;

    model = "Unknown";
    battery = 0;
    missions = 0;
}


// One-argument constructor
MissionRobot::MissionRobot(std::string model_name)
{
    cout << "String arg constructor called" << endl;

    model = model_name;
    battery = 0;
    missions = 0;
}


// Three-argument constructor
MissionRobot::MissionRobot(
    std::string model_name,
    int battery_level,
    int mission_count)
{
    cout << "Three args constructor called" << endl;

    model = model_name;
    battery = battery_level;
    missions = mission_count;
}


// =====================================================
// DESTRUCTOR
// =====================================================

MissionRobot::~MissionRobot()
{
    cout << "Destructor called for " << model << endl;
}

