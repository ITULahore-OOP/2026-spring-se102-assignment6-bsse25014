#include "Warrior.h"

    Warrior :: Warrior(string name, int health, int power, int armorRating) : Hero(name, health, power)
    {
        this->armorRating = armorRating;
    }

    Warrior :: ~Warrior() {}
    
    int Warrior :: getArmor()
    {
        return armorRating;
    }

    int Warrior :: calculateEffectiveHealth()
    {
        return (getHealth() + (armorRating * 2));
    }
