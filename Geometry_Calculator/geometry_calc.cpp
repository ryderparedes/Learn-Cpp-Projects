#include "geometry_calc.h"
#include <iostream>
#include <cmath>

void printPoint(const Point& p)
{
    std::cout << "x: " << p.x << " y: " << p.y << '\n';
}

double calculateDistance(const Point& p1, const Point& p2)
{
    double result { std::sqrt( (pow(p2.x - p1.x,2)) + (pow(p2.y - p1.y,2)) ) };
    return result;
}

Point calculateMidPoint(const Point& p1, const Point& p2)
{
    double x { (p1.x + p2.x) / 2};
    double y { (p1.y + p2.y) / 2};

    return Point { x, y };
}

double calculateSlope(const Point& p1, const Point& p2)
{
    double result { (p2.y - p1.y) / (p2.x - p1.x)};
    return result;
}