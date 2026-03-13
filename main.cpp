#include <iostream>
#include "Guild.h"
#include "Hero.h"

using namespace std;

int main() 
{
    string name;
    cout << "enter guild name: ";
    cin >> name;

    Guild g(name);

    Hero* heroes[10];
    int heroCount = 0;

    int choice = -1;

    while (choice != 0) 
    {
        cout << endl;
        cout << "1 add hero" << endl;
        cout << "2 add hero to guild" << endl;
        cout << "3 show guild stats" << endl;
        cout << "4 show guild members" << endl;
        cout << "0 exit" << endl;

        cout << "choice: ";
        cin >> choice;

        if (choice == 1) 
        {

            string hname;
            int hp;
            int power;

            cout << "hero name: ";
            cin >> hname;

            cout << "health: ";
            cin >> hp;

            cout << "power: ";
            cin >> power;

            heroes[heroCount] = new Hero(hname, hp, power);
            heroCount++;

            cout << "hero created" << endl;
        }
        if (choice == 2) 
        {

            int index;

            cout << "hero index: ";
            cin >> index;

            if (index >= 0 && index < heroCount)
             {
                g += heroes[index];
                cout << "hero added to guild" << endl;
            }
            else 
            {
                cout << "wrong index" << endl;
            }
        }
        if (choice == 3) 
        {

            g.displayGuildStats();
        }
        if (choice == 4) 
        {

            cout << g;
        }
    }

    for (int i = 0; i < heroCount; i++)
     {
        delete heroes[i];
    }

    return 0;
}