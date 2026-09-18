#include <iostream>
#include "game_character.h"

using namespace std;

// Getter functions

string GameCharacter::get_name() const
{
    return character_name;
}

int GameCharacter::get_health() const
{
    return health;
}

int GameCharacter::get_experience() const
{
    return experience;
}

// Three-argument constructor

GameCharacter::GameCharacter(string name,
                             int health_points,
                             int experience_points)
    : character_name{name},
      health{health_points},
      experience{experience_points}
{
    cout << "Constructor called for: "
         << character_name << endl;
}

// Copy constructor

GameCharacter::GameCharacter(const GameCharacter& source)
    : GameCharacter{source.character_name,
                    source.health,
                    source.experience}
{
    cout << "Copy constructor - copied: "
         << source.character_name << endl;
}

// Destructor

GameCharacter::~GameCharacter()
{
    cout << "Destructor called for: "
         << character_name << endl;
}

// Display function

void display_character(const GameCharacter& character)
{
    cout << "Name: " << character.get_name() << endl;
    cout << "Health: " << character.get_health() << endl;
    cout << "Experience: " << character.get_experience() << endl;
}
