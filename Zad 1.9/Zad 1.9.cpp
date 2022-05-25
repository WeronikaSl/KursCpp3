#include <iostream>
#include <time.h>

int main()
{
    srand(time(NULL));
    float number = 0.0f;

    do
    {
        number = (rand() / static_cast<float>(10000)); //mogłoby też być 10000.0
        std::cout << number << std::endl;

    } while (number > 0.03f);
}

