#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Class: Spacecraft
// ==================================================
class Spacecraft {

private:
    // ----------------------------------------------
    // PRIVATE DATA
    // The outside world cannot directly access these
    // ----------------------------------------------
    string name{"Apollo"};
    int fuel{100};
    int health{100};

public:
    // ----------------------------------------------
    // PUBLIC METHODS
    // These are the controlled ways to interact
    // with the spacecraft
    // ----------------------------------------------

    void communicate(string message) {
        cout << name << " says: " << message << endl;
    }

    void show_status() {
        cout << "\n--- Spacecraft Status ---" << endl;
        cout << "Name   : " << name << endl;
        cout << "Fuel   : " << fuel << "%" << endl;
        cout << "Health : " << health << "%" << endl;
    }
};


// ==================================================
// Main
// ==================================================
int main() {

    // Create an object
    Spacecraft mission_ship;

    // ------------------------------------------------
    // Direct access to private data is NOT allowed
    // ------------------------------------------------

    // mission_ship.name = "Explorer";   // ERROR
    // mission_ship.fuel = 50;           // ERROR
    // cout << mission_ship.health;      // ERROR


    // ------------------------------------------------
    // Public methods can be accessed
    // ------------------------------------------------

    mission_ship.communicate("Mission started!");

    mission_ship.show_status();

    return 0;
}

