#include "constructor.h"

void Character::set_name(std::string name_val)
{
    character_name = name_val;
}

std::string Character::get_name()
{
    return character_name;
}

/*Character::Character()
{
    character_name = "Unknown";
    health = 80;
    level = 1;
}*/
/*
Character::Character(std::string name_val, int health_val, int level_val)
{
    character_name = name_val;
    health = health_val;
    level = level_val;
}*/
