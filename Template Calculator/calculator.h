#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <type_traits>

template <typename T>
T getInput()
{
    if (std::is_same_v<T, char>) {
        std::cout << "Enter a operation: ";
    }
    else {
        std::cout << "Enter a number: ";
    }
    T num {};
    std::cin >> num;

    return num;
}

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
std::optional<double> division(double x, double y);

#endif