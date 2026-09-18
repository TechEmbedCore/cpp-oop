
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// --------------------------------------------------
// Class: Astronaut
// --------------------------------------------------
class Astronaut {
    // Attributes
    string name{"Unknown Astronaut"};
    int oxygen_level{100};
    int mission_points{10};

    // Methods
    void communicate(string message) {
        cout << name << ": " << message << endl;
    }

    bool is_in_danger() {
        return oxygen_level <= 20;
    }
};


// --------------------------------------------------
// Class: SpaceWallet
// --------------------------------------------------
class SpaceWallet {
    // Attributes
    string owner{"Anonymous"};
    double credits{0.0};

    // Methods
    bool add_credits(double amount) {
        if (amount > 0) {
            credits += amount;
            return true;
        }
        return false;
    }

    bool spend_credits(double amount) {
        if (amount > 0 && amount <= credits) {
            credits -= amount;
            return true;
        }
        return false;
    }
};


int main() {
    // --------------------------------------------------
    // Create individual SpaceWallet objects
    // --------------------------------------------------
    SpaceWallet captain_wallet;
    SpaceWallet engineer_wallet;


    // --------------------------------------------------
    // Create individual Astronaut objects
    // --------------------------------------------------
    Astronaut captain;
    Astronaut explorer;


    // --------------------------------------------------
    // Array of objects
    // --------------------------------------------------
    Astronaut crew[] {captain, explorer};


    // --------------------------------------------------
    // Vector of objects
    // --------------------------------------------------
    vector<Astronaut> mission_crew {captain};

    mission_crew.push_back(explorer);


    // --------------------------------------------------
    // Dynamically create an object
    // --------------------------------------------------
    Astronaut* emergency_crew_member{nullptr};

    emergency_crew_member = new Astronaut;

    delete emergency_crew_member;
    emergency_crew_member = nullptr;


    return 0;
}

