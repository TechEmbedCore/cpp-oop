#include <iostream>
#include "MissionDrone.h"

using namespace std;


// ============================================================
// Default constructor
// Delegates to the three-argument constructor
// ============================================================

MissionDrone::MissionDrone()
    : MissionDrone{"Survey-X1", 0, 0}
{
    cout << "Default constructor called" << endl;
}


// ============================================================
// One-argument constructor
// Delegates to the three-argument constructor
// ============================================================

MissionDrone::MissionDrone(std::string model_name)
    : MissionDrone{model_name, 80, 5}
{
    cout << "One-argument constructor called" << endl;
}


// ============================================================
// Three-argument constructor
// Performs the actual initialization
// ============================================================

MissionDrone::MissionDrone(
    std::string model_name,
    int battery_level,
    int hours)
    : model{model_name},
      battery{battery_level},
      flight_hours{hours}
{
    cout << "Three-argument constructor called" << endl;
}

