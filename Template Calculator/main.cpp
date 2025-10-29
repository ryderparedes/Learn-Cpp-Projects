#include "calculator.h"
#include <iostream>

int main() {
    double num1 { getInput<double>()};
    char operation { getInput<char>()};
    double num2 { getInput<double>()};

    switch (operation)
    {
        case '+':
            std::cout << num1 << " + "  << num2 << " = " << add(num1 , num2) << '\n';
            break;
        case '-':
            std::cout << num1 << " - "  << num2 << " = " << subtract(num1 , num2) << '\n';
            break;
        case '*':
            std::cout << num1 << " * "  << num2 << " = " << multiply(num1 , num2) << '\n';
            break;
        case '/':
            std::optional<double> result { division(num1 , num2) };
            if (result)
                std::cout << num1 << " / "  << num2 << " = " << *result << '\n';
            else
                std::cout << num1 << " / "  << num2 << " = Undefined" << '\n';
            break;
    }
}