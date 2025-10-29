#include "calculator.h"
#include <iostream>

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

std::optional<double> division(double x, double y)
{
    if (y == 0)
        return {};
    return x / y;
}