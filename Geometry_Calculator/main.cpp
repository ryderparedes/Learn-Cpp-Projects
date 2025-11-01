#include "geometry_calc.h"
#include <iostream>

int main() {
    Point p1 {};
    Point p2 {};

    char eater;
    std::cout << "Enter 2 points as \"(x,y) (x2,y2)\": ";
    std::cin >> eater >> p1.x >> eater >> p1.y >>
    eater >> eater >> p2.x >> eater >> p2.y >> eater;

    std::cout << "1. Calculate Distance Between 2 Points" << '\n';
    std::cout << "2. Calculate Midpoint" << '\n';
    std::cout << "3. Calculate Slope" << '\n';
    std::cout << "Enter Option: ";
    int input {};
    std::cin >> input;

    switch (input) {
        case 1:
            std::cout << calculateDistance(p1, p2) << '\n';
            break;
        case 2:
            printPoint(calculateMidPoint(p1, p2));
            break;
        case 3:
            std::cout << calculateSlope(p1, p2) << '\n';
            break;
        default:
            std::cout << "Invalid Input!\n";
            break;
    }

    return 0;
}