#include <iostream>
#include <string>

using namespace std;

// --------------------------------------------------
// Class: BankAccount
// --------------------------------------------------
class BankAccount {
public:
    // Attributes
    string holder_name;
    double amount;

    // Methods
    bool add_money(double value) {
        amount += value;
        cout << "Money deposited" << endl;
        return true;
    }

    bool take_money(double value) {
        amount -= value;
        cout << "Money withdrawn" << endl;
        return true;
    }
};

// --------------------------------------------------
// Class: Robot
// --------------------------------------------------
class Robot {
public:
    // Attributes
    string model;
    int battery;
    int experience;

    // Methods
    void speak(string message) {
        cout << model << " says " << message << endl;
    }

    bool is_shutdown() {
        return battery <= 0;
    }
};

// --------------------------------------------------
// Main
// --------------------------------------------------
int main() {

    // ----------------------------------------------
    // Accessing class members using an object
    // ----------------------------------------------

    BankAccount arjun_account;

    arjun_account.holder_name = "Arjun's account";
    arjun_account.amount = 7500.0;

    arjun_account.add_money(1500.0);
    arjun_account.take_money(800.0);


    // ----------------------------------------------
    // Another object of the Robot class
    // ----------------------------------------------

    Robot explorer;

    explorer.model = "Explorer";
    explorer.battery = 100;
    explorer.experience = 20;

    explorer.speak("Mission started");


    // ----------------------------------------------
    // Accessing class members using a pointer
    // ----------------------------------------------

    Robot *guardian = new Robot;

    // Pointer + dereference + dot
    (*guardian).model = "Guardian";
    (*guardian).battery = 100;

    // Arrow operator
    guardian->experience = 25;

    guardian->speak("I will protect the mission");


    // ----------------------------------------------
    // Release dynamically allocated memory
    // ----------------------------------------------

    delete guardian;
    guardian = nullptr;

    return 0;
}

