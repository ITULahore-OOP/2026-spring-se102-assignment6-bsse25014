#ifndef HERO_H
#define HERO_H

#include <string>
#include <iostream>

using namespace std;

class Hero {
private:
string heroName;
int health;
int basePower;
public:
    Hero(string name, int health, int power);
    ~Hero();

 string getName() const;

 int getHealth() const;

 int getPower();

 void takeDamage(int) ;

 bool operator>(Hero);

 int operator+(Hero);

};

#endif
