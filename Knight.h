#ifndef KNIGHT_h
#define KNIGHT_h

#include "Warrior.h"    
#include <string>
#include <iostream>

using namespace std;

class Knight : public Warrior
{
    private:
    int chargeBonus;

    public:
    Knight(string name, int health, int power, int armorRating, int chargeBonus); 

    int getChargeBonus();

    int calculateBurstDamage();
};

#endif