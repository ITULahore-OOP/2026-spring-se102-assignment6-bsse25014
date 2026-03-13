#include "Hero.h"

Hero :: Hero(string name, int health, int power)
{
    heroName = name;
    this->health = health;
    basePower = power;
}

Hero :: ~Hero(){}

string Hero :: getName() const
{
    return heroName;
}

int Hero :: getHealth() const
{
    return health;
}

int Hero :: getPower()
{
    return basePower;
}

void Hero :: takeDamage(int damage)
{
    health -= damage;
    if (health < 0) health = 0;
}

bool Hero :: operator>(Hero other)
{
    return (basePower > other.getPower());
}

int Hero :: operator+(Hero other)
{
    return health + other.getHealth();
}


