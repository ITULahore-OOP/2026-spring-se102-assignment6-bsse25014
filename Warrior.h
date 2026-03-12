#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>
#include <iostream>

using namespace std;

class Warrior {
public:
    Warrior() {}
    ~Warrior() {}
};

#endif


// Hero 
// void takeDamage(int damage): This function should subtract the damage value from the hero’s current health. You should include a check to ensure that health does not drop below 0.
// bool operator<(const Hero &other) const: This is a comparison of strength. It should return true if the current hero’s basePower is strictly greater than the other hero’s power.
// int operator+(const Hero &other) const: This represents the "Combined Vitality" of two heroes. It should return the sum of the current hero’s health and the other hero’s health.
// Formula: Effective Health = Health + (Armor Rating * 2)

// Warrior & Knight
// int calculateEffectiveHealth() const (Warrior): This function should return the hero’s base health plus a bonus from the Armor rating.
// Formula: Effective Health = Health + (Armor Rating * 2)
// int calculateBurstDamage() const (Knight): This should return the sum of basePower and chargeBonus
// Formula: Burst Damage = Base Power + Charge Bonus

// Spell Blade
// int calculateHybridDamage() const: This function should return the total of the basePower and the spellPower
// Formula: Hybrid Damage = Base Power + Spell Power

// Guild: Management and Output
// void operator+=(Hero &newHero): This function is used to recruit a hero. It should check if memberCount is less than 15. If there is space, add the newHero pointer to the roster at the current memberCount index and increment the count. If the guild is full, it should print an error message: “Guild is full capacity!”
// friend ostream &operator<<(ostream &os, const Guild &g): This allows you to print the entire Guild status using cout << myGuild;.
// It should print the Guild Name and then loop through the roster to print the name and power of every hero currently in the guild.
// Memory Management (The Destructor)
// ~Guild(): Since the guild “owns” its roster of heroes, the destructor must loop through the roster and delete each hero to prevent memory leaks. Finally, it should print: “The guild [GuildName] has been disbanded.”
// Program Requirements
// Students must:
// Use separate header and implementation files
// Keep all data members private
// Use constructors to initialize objects
// Demonstrate inheritance relationships clearly
// Demonstrate multilevel inheritance clearly
// Demonstrate multiple inheritance clearly
// Demonstrate composition clearly
// Demonstrate operator overloading correctly