#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

class BankAccount
{
private:
    std::string account_holder;
    double balance;
    int account_number;

public:
    // Constructor with default arguments
    BankAccount(std::string holder = "Unknown",
                double initial_balance = 0.0,
                int number = 1000);
};

#endif
