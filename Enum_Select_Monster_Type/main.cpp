#include "select_monster.h"
#include <iostream>

int main()
{
    std::cout << "orc" << '\n' << "goblin" << '\n' << "troll" <<
        '\n' << "ogre" << '\n' << "skeleton" << '\n';
    std::cout << "Choose a race: ";
    MonsterType race {};
    std::cin >> race;

    if (std::cin)
        std::cout << "You race is: " << race << '\n';
    else
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid Input" << '\n';
    }

    return 0;
}