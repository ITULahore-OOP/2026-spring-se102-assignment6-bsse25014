#include "SpellBlade.h"


SpellBlade :: SpellBlade(string name, int health, int power, int armorRating, int manaPool, int spellPower)
: MagicalEntity(manaPool, spellPower), Warrior (name, health, power, armorRating) {}

int SpellBlade :: calculateHybridDamage()
{
    return getPower() + getSpellPower();
}

