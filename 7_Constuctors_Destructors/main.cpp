#include <iostream>
#include "MissionRobot.h"

using namespace std;

int main()
{
    // =====================================================
    // STACK OBJECTS
    // =====================================================

    {
        // No-argument constructor
        MissionRobot scout;

        scout.set_model("Scout-01");
    }


    {
        // No-argument constructor
        MissionRobot rover;

        rover.set_model("Rover-X");


        // One-argument constructor
        MissionRobot explorer("Explorer-7");

        explorer.set_model("Explorer-7");


        // Three-argument constructor
        MissionRobot guardian("Guardian-500", 100, 25);

        guardian.set_model("Guardian-500");
    }


    // =====================================================
    // HEAP OBJECTS
    // =====================================================

    // No-argument constructor
    MissionRobot *drone = new MissionRobot;

    drone->set_model("Drone-A1");


    // Three-argument constructor
    MissionRobot *command_unit =
        new MissionRobot("Command-900", 95, 50);

    command_unit->set_model("Command-900");


    // =====================================================
    // DELETE HEAP OBJECTS
    // =====================================================

    delete drone;

    delete command_unit;


    return 0;
}

