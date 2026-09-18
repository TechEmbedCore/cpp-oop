#ifndef _MISSION_WALLET_H_
#define _MISSION_WALLET_H_

#include <string>

class MissionWallet {

private:
    // Private data members
    std::string owner;
    double credits;

public:
    // Mutator methods (setters)
    void set_owner(std::string name);
    void set_credits(double value);

    // Accessor methods (getters)
    std::string get_owner();
    double get_credits();

    // Other member functions
    bool add_credits(double amount);
    bool spend_credits(double amount);
};

#endif // _MISSION_WALLET_H_
