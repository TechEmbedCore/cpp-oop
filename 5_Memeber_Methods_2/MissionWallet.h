#ifndef _MISSION_WALLET_H_
#define _MISSION_WALLET_H_

#include <string>

class MissionWallet {

private:
    // Data members
    std::string owner;
    double credits;

public:
    // Defined inside the class
    void set_credits(double value) {
        credits = value;
    }

    double get_credits() {
        return credits;
    }

    // Only declarations
    // Definitions will be in MissionWallet.cpp
    void set_owner(std::string name);
    std::string get_owner();

    bool add_credits(double amount);
    bool spend_credits(double amount);
};

#endif // _MISSION_WALLET_H_
