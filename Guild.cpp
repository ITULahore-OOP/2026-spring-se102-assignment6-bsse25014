#include "Guild.h"
#include "Guild.h"

Guild :: Guild(string name)
{
    guildName = name;
    memberCount = 0;
}

Guild :: ~Guild()
{
    for (int i = 0; i < memberCount; i++)
    {
        //delete roster[i];
    }

    cout << "The guild " << guildName << " has been disbanded!" << endl;
}

int Guild :: calculateTotalGuildPower()
{
    int sumPower = 0;
    for (int i = 0; i < memberCount; i++)
    {
        sumPower += roster[i]->getPower();
    }

    return sumPower;
}

void Guild :: displayGuildStats()
{
    cout << "Guild Name: " << guildName << endl << "Total Members: " << memberCount 
    << "/15" << endl << "Total Guild Power: " <<  calculateTotalGuildPower() << endl;
}

void Guild :: operator +=(Hero* newHero)
{
    if (memberCount >= 15)
    {
        cout << "Guild is at full capacity!" << endl;
        return;
    }
    roster[memberCount] = newHero;
    memberCount++;
}

ostream& operator<<(ostream& os, const Guild& guild)
{
    os << "Guild: " << guild.guildName << endl << "Members: " << guild.memberCount << endl;

    for (int i = 0; i < guild.memberCount; i++)
    {
        os << "- " << guild.roster[i]->getName() << " (Power: " << guild.roster[i]->getPower() << ")" << endl;
    }

    return os;
}