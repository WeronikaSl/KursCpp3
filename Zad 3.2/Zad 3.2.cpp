#include "functions.h"
#include <iostream>


int main()
{
    std::cout << power(3, -1) << std::endl;
    std::cout << power(3, 0) << std::endl;
    std::cout << power(3, 2) << std::endl;
    std::cout << power(3, 4) << std::endl;

    std::cout << power(3.0f, -1.0f) << std::endl;
    std::cout << power(3.0f, 0.0f) << std::endl;
    std::cout << power(3.0f, 2.0f) << std::endl;
    std::cout << power(3.0f, 4.0f) << std::endl;

    std::cout << power(3.0, -1.0) << std::endl;
    std::cout << power(3.0, 0.0) << std::endl;
    std::cout << power(3.0, 2.0) << std::endl;
    std::cout << power(3.0, 4.0) << std::endl;

}
