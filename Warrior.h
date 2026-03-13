#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"
#include <string>
#include <iostream>

using namespace std;

class Warrior : public Hero
{
    private:
    int armorRating;

    public:
    Warrior(string name, int health, int power, int armorRating);

    ~Warrior();

    int getArmor();

    int calculateEffectiveHealth();
};

#endif


