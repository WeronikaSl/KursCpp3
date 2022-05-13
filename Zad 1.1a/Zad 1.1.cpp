#include <iostream>

int main()
{
    int a = 3;
    int b = 6;
    int c = 8;

    if ((a > b) && (a > c))
    {
        std::cout << "Największa: " << a << std::endl;
    }
    else if ((b > a) && (b > c))
    {
        std::cout << "Największa: " << b << std::endl;
    }
    else
    {
        std::cout << "Największa: " << c << std::endl;
    }
}
