#include "bank_account.h"

int main()
{
    // All three default arguments are used
    BankAccount account1;

    // Two default arguments are used
    BankAccount account2{"Rahul"};

    // One default argument is used
    BankAccount account3{"Priya", 25000.0};

    // No default arguments are used
    BankAccount account4{"Arjun", 50000.0, 2025};

    return 0;
}
