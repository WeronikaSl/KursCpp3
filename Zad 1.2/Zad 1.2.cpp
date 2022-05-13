#include <iostream>

int main()
{
    int l = 0;
    std::cin >> l;

    if (l % 2 == 0)
    {
        std::cout << "Liczba jest parzysta" << std::endl;
    }
    else
    {
        std::cout << "Liczba jest nieparzysta" << std::endl;
    }
}

