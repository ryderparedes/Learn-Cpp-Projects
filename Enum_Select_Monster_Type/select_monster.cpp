#include "select_monster.h"
#include <iostream>
#include <string>
#include <string_view>

std::string_view enumToString(MonsterType m)
{
    using enum MonsterType;

    switch (m)
    {
        case orc:       return "orc";
        case goblin:    return "goblin";
        case troll:     return "troll";
        case ogre:      return "ogre";
        case skeleton:  return "skeleton";
    }
}

std::optional<MonsterType> stringToEnum(std::string_view s)
{
    using enum MonsterType;

    if (s == "orc")       return orc;
    if (s == "goblin")    return goblin;
    if (s == "troll")     return troll;
    if (s == "ogre")      return ogre;
    if (s == "skeleton")  return skeleton;

    return {};
}


std::ostream& operator<<(std::ostream& out, MonsterType m)
{
    out << enumToString(m);
    return out;
}

std::istream& operator>>(std::istream& in, MonsterType& m)
{
    std::string s{};
    in >> s;

    std::optional<MonsterType> match { stringToEnum(s) };
    if (match)
    {
        m = *match;
        return in;
    }

    in.setstate(std::ios_base::failbit);

    return in;
}