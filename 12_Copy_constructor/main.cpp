#include <iostream>
#include "game_character.h"

using namespace std;

int main()
{
    cout << "Creating original character" << endl;

    GameCharacter warrior{"Warrior", 100, 50};

    cout << "\nCreating a copy" << endl;

    GameCharacter warrior_copy{warrior};

    cout << "\nDisplaying original character" << endl;

    display_character(warrior);

    cout << "\nDisplaying copied character" << endl;

    display_character(warrior_copy);

    cout << "\nCreating characters using default arguments" << endl;

    GameCharacter beginner{"Beginner"};

    GameCharacter fighter{"Fighter", 120};

    GameCharacter champion{"Champion", 150, 500};

    return 0;
}
