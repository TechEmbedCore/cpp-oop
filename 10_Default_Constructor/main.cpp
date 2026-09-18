#include <iostream>
#include "constructor.h"

using namespace std;

int main()
{
    Character player1;

    Character player2{"Arjun", 120, 5};

    player2.set_name("Arjun");

    cout << player2.get_name() << endl;

    return 0;
}
