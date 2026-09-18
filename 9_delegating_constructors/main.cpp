#include <iostream>
#include "MissionDrone.h"

using namespace std;

int main()
{
    cout << "Creating first drone..." << endl;

    // Calls the default constructor
    // Default constructor delegates to the three-argument constructor
    MissionDrone standby_drone;

    cout << endl;


    cout << "Creating second drone..." << endl;

    // Calls the one-argument constructor
    // One-argument constructor delegates to the three-argument constructor
    MissionDrone delivery_drone{"Delivery-7"};

    cout << endl;


    cout << "Creating third drone..." << endl;

    // Calls the three-argument constructor directly
    MissionDrone rescue_drone{"Rescue-99", 95, 120};

    cout << endl;


    return 0;
}

