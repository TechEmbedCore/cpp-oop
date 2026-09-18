#include <iostream>
#include "MissionWallet.h"

using namespace std;

int main() {

    // Create an object
    MissionWallet captain_wallet;

    // Set initial information
    captain_wallet.set_owner("Captain Arjun");
    captain_wallet.set_credits(1000.0);

    cout << "Mission Wallet" << endl;
    cout << "Owner   : " << captain_wallet.get_owner() << endl;
    cout << "Credits : " << captain_wallet.get_credits() << endl;

    cout << endl;


    // Add credits
    if (captain_wallet.add_credits(200.0))
        cout << "Credits added successfully" << endl;
    else
        cout << "Credit addition failed" << endl;


    cout << "Credits : "
         << captain_wallet.get_credits() << endl;

    cout << endl;


    // Spend credits
    if (captain_wallet.spend_credits(500.0))
        cout << "Mission payment successful" << endl;
    else
        cout << "Not enough credits" << endl;


    cout << "Credits : "
         << captain_wallet.get_credits() << endl;

    cout << endl;


    // Try to spend more than available
    if (captain_wallet.spend_credits(1500.0))
        cout << "Mission payment successful" << endl;
    else
        cout << "Not enough credits for this mission" << endl;


    cout << "Credits : "
         << captain_wallet.get_credits() << endl;


    return 0;
}


/*
.h file
   ↓
WHAT the class provides

.cpp file
   ↓
HOW the class works

main.cpp
   ↓
USES the class

*/
