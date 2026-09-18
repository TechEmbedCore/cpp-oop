#include "Spacecraft.h"
#include <iostream>

using namespace std;


// ============================================================
// Default constructor
// ============================================================

Spacecraft::Spacecraft()
    : mission_name{"Unassigned"},
      fuel_level{0},
      crew_count{0}
{
    cout << "Default constructor called" << endl;
}


// ============================================================
// One-argument constructor
// ============================================================

Spacecraft::Spacecraft(std::string mission)
    : mission_name{mission},
      fuel_level{50},
      crew_count{1}
{
    cout << "One-argument constructor called" << endl;
}


// ============================================================
// Three-argument constructor
// ============================================================

Spacecraft::Spacecraft(
    std::string mission,
    int fuel,
    int crew)
    : mission_name{mission},
      fuel_level{fuel},
      crew_count{crew}
{
    cout << "Three-argument constructor called" << endl;
}

