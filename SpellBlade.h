#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include "MagicalEntity.h"
#include "Warrior.h"
#include <string>
#include <iostream>

using namespace std;

class SpellBlade : public MagicalEntity, public Warrior
{
    public:
    SpellBlade(string name, int health, int power, int armorRatin, int manaPool, int spellPower);
    int calculateHybridDamage();
};

#endif