#include <iostream>
#include <time.h>

int random1To10()
{
    return rand() % 10 +1;
}

int main()
{
    srand(time(NULL));

    int a = random1To10();
    int b = random1To10();
    int c = random1To10();

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}

