#ifndef CONSTRUCTOR_H
#define CONSTRUCTOR_H

#include <string>

class Character
{
private:
    std::string character_name;
    int health;
    int level;

public:
    void set_name(std::string name_val);
    std::string get_name();

//    Character();
//    Character(std::string name_val, int health_val, int level_val);
};

#endif
