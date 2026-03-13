#ifndef GUILD_H
#define GUILD_H

#include "Hero.h"

#include <string>
#include <iostream>

using namespace std;

class Guild {
private:
string guildName;
Hero* roster[15];
int memberCount;

public:
Guild(string);

~Guild();

int calculateTotalGuildPower();

void displayGuildStats();

void operator +=(Hero* hero);
friend ostream& operator<<(ostream& os, const Guild& guild);

};

#endif
