#include <iostream>
#include "MissionWallet.h"

using namespace std;

int main() {

    // Create an object
    MissionWallet captain_wallet;


    // =========================================================
    // MUTATORS (SETTERS)
    // =========================================================

    // set_owner() modifies the private 'owner' data member
    captain_wallet.set_owner("Captain Arjun");

    // set_credits() modifies the private 'credits' data member
    captain_wallet.set_credits(1000.0);


    // =========================================================
    // ACCESSORS (GETTERS)
    // =========================================================

    // get_owner() reads the private 'owner' data member
    cout << "Mission Wallet" << endl;
    cout << "Owner   : "
         << captain_wallet.get_owner() << endl;

    // get_credits() reads the private 'credits' data member
    cout << "Credits : "
         << captain_wallet.get_credits() << endl;

    cout << endl;


    // =========================================================
    // MEMBER FUNCTIONS / OPERATIONS
    // =========================================================

    // add_credits() modifies the private 'credits' data member
    if (captain_wallet.add_credits(200.0)) {
        cout << "Credits added successfully" << endl;
    }
    else {
        cout << "Credit addition failed" << endl;
    }

    // Accessor used to read the updated credits
    cout << "Credits : "
         << captain_wallet.get_credits() << endl;

    cout << endl;


    // spend_credits() modifies the private 'credits' data member
    if (captain_wallet.spend_credits(500.0)) {
        cout << "Mission payment successful" << endl;
    }
    else {
        cout << "Not enough credits" << endl;
    }

    // Accessor used to read the updated credits
    cout << "Credits : "
         << captain_wallet.get_credits() << endl;

    cout << endl;


    // =========================================================
    // TEST INVALID OPERATION
    // =========================================================

    // Try to spend more credits than available
    if (captain_wallet.spend_credits(1500.0)) {
        cout << "Mission payment successful" << endl;
    }
    else {
        cout << "Not enough credits for this mission" << endl;
    }

    cout << "Credits : "
         << captain_wallet.get_credits() << endl;


    return 0;
}


/*
    MissionWallet.h
           |
           |  WHAT the class provides
           v
    MissionWallet.cpp
           |
           |  HOW the class works
           v
       main.cpp
           |
           |  USES the class
           v
        Program
*/

