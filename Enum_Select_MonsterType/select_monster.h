#ifndef SELECT_MONSTER_H
#define SELECT_MONSTER_H

#include <iostream>
#include <string>
#include <string_view>


enum class MonsterType
{
    orc,
    goblin,
    troll,
    ogre,
    skeleton,
};

std::string_view enumToString(MonsterType m);
std::optional<MonsterType> stringToEnum(std::string_view s);
std::ostream& operator<<(std::ostream& out, MonsterType m);
std::istream& operator>>(std::istream& in, MonsterType& m);

#endif