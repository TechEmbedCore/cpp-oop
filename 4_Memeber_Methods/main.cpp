#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Class: MissionWallet
// ==================================================
class MissionWallet {

private:
    // ------------------------------------------------
    // PRIVATE DATA
    // Only MissionWallet itself can directly access
    // these variables.
    // ------------------------------------------------
    string owner_name;
    double credits;

public:

    // ------------------------------------------------
    // INLINE MEMBER FUNCTIONS
    // Defined inside the class
    // ------------------------------------------------

    void set_credits(double value) {
	if (credits>0)
        	credits = value;
	else
		cout<<"Invalid credits"<<endl;
    }

    double get_credits() {
        return credits;
    }


    // ------------------------------------------------
    // MEMBER FUNCTIONS
    // Only declared here.
    // Definitions are written outside the class.
    // ------------------------------------------------

    void set_owner(string name);

    string get_owner();

    bool add_credits(double amount);

    bool spend_credits(double amount);
};


// ==================================================
// MEMBER FUNCTION DEFINITIONS
// ==================================================

// Set the wallet owner's name
void MissionWallet::set_owner(string name) {
    owner_name = name;
}


// Get the wallet owner's name
string MissionWallet::get_owner() {
    return owner_name;
}


// Add credits to the wallet
bool MissionWallet::add_credits(double amount) {

    if (amount > 0) {
        credits += amount;
        return true;
    }

    return false;
}


// Spend credits from the wallet
bool MissionWallet::spend_credits(double amount) {

    if (amount > 0 && credits - amount >= 0) {
        credits -= amount;
        return true;
    }

    return false;
}


// ==================================================
// MAIN
// ==================================================
int main() {

    // Create a MissionWallet object
    MissionWallet captain_wallet;


    // ------------------------------------------------
    // We CANNOT directly access private data
    // ------------------------------------------------

    // captain_wallet.owner_name = "Captain Alex";  // ERROR
    // captain_wallet.credits = 1000.0;              // ERROR


    // ------------------------------------------------
    // Instead, we use PUBLIC member functions
    // ------------------------------------------------

    captain_wallet.set_owner("Captain Alex");
    captain_wallet.set_credits(1000.0);


    cout << "Mission Wallet: "
         << captain_wallet.get_owner() << endl;

    cout << "Starting Credits: "
         << captain_wallet.get_credits() << endl;


    // ------------------------------------------------
    // Add credits
    // ------------------------------------------------

    if (captain_wallet.add_credits(200.0)) {
        cout << "Credits added successfully!" << endl;
    }
    else {
        cout << "Credit addition failed!" << endl;
    }


    cout << "Current Credits: "
         << captain_wallet.get_credits() << endl;


    // ------------------------------------------------
    // Spend credits
    // ------------------------------------------------

    if (captain_wallet.spend_credits(500.0)) {
        cout << "Credits spent successfully!" << endl;
    }
    else {
        cout << "Not enough credits!" << endl;
    }


    cout << "Current Credits: "
         << captain_wallet.get_credits() << endl;


    // ------------------------------------------------
    // Try to spend more than available
    // ------------------------------------------------

    if (captain_wallet.spend_credits(1500.0)) {
        cout << "Credits spent successfully!" << endl;
    }
    else {
        cout << "Not enough credits for this mission!" << endl;
    }


    cout << "Final Credits: "
         << captain_wallet.get_credits() << endl;


    return 0;
}

