#include "MissionWallet.h"

void MissionWallet::set_owner(std::string name) {
    owner = name;
}

std::string MissionWallet::get_owner() {
    return owner;
}

bool MissionWallet::add_credits(double amount) {

    if (amount > 0) {
        credits += amount;
        return true;
    }

    return false;
}

bool MissionWallet::spend_credits(double amount) {

    if (amount > 0 && credits - amount >= 0) {
        credits -= amount;
        return true;
    }

    return false;
}
