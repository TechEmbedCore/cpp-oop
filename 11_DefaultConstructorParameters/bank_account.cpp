#include <iostream>
#include "bank_account.h"

using namespace std;

BankAccount::BankAccount(string holder,
                         double initial_balance,
                         int number)
    : account_holder{holder},
      balance{initial_balance},
      account_number{number}
{
    cout << "BankAccount constructor called" << endl;
}
