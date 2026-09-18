#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>

class Spacecraft
{
private:
    // Data members
    std::string mission_name{"Unknown"};
    int fuel_level{0};
    int crew_count{0};

public:
    // Default constructor
    Spacecraft();

    // One-argument constructor
    Spacecraft(std::string mission);

    // Three-argument constructor
    Spacecraft(std::string mission, int fuel, int crew);
};

#endif

