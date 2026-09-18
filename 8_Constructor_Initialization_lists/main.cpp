#include <iostream>
#include "Spacecraft.h"

using namespace std;

int main()
{
    cout << "Creating Spacecraft objects..." << endl;
    cout << endl;


    // ========================================================
    // Default constructor
    // ========================================================

    Spacecraft standby_ship;

    cout << endl;


    // ========================================================
    // One-argument constructor
    // ========================================================

    Spacecraft cargo_ship{"Cargo Mission"};

    cout << endl;


    // ========================================================
    // Three-argument constructor
    // ========================================================

    Spacecraft exploration_ship{
        "Mars Exploration",
        85,
        6
    };

    cout << endl;

    return 0;
}

