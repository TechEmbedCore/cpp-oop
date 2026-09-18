#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include <string>

class GameCharacter
{
private:
    std::string character_name;
    int health;
    int experience;

public:
    std::string get_name() const;
    int get_health() const;
    int get_experience() const;

    // Constructor with default arguments
    GameCharacter(std::string name = "Unknown",
                  int health_points = 0,
                  int experience_points = 0);

    // Copy constructor
    GameCharacter(const GameCharacter& source);

    // Destructor
    ~GameCharacter();
};

void display_character(const GameCharacter& character);

#endif
