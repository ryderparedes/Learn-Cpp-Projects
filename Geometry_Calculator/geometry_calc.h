#ifndef GEOMETRY_CALC_H
#define GEOMETRY_CALC_H

struct Point
{
    double x {};
    double y {};
};

void printPoint(const Point& p);
double calculateDistance(const Point& p1, const Point& p2);
Point calculateMidPoint(const Point& p1, const Point& p2);
double calculateSlope(const Point& p1, const Point& p2);

#endif