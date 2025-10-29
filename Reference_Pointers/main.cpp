#include <iostream>
#include <string>

void referenceSwap(std::string& x, std::string& y)
{
    std::string tempString { x };
    if (x[0] < y[0]) {
        x = y;
        y = tempString;
    }
}

void pointerSwap(std::string* x, std::string* y)
{
    std::string xString { *x };
    std::string yString { *y };
    if (xString[0] < yString[0]) {
        *x = yString;
        *y = xString;
    }
}

int main()
{
    std::string hello { "Hello" };
    std::string world { "World" };

    referenceSwap(hello, world);

    std::cout << hello << ' ' << world << '\n';

    hello = "Hello";
    world = "World";

    std::string* ptr1 { &hello };
    std::string* ptr2 { &world };

    pointerSwap(ptr1, ptr2);

    std::cout << hello << ' ' << world << '\n';

    return 0;
}
