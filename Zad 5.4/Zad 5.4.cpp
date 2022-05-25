#include <iostream>
#include "functionsForTask.h"

int main()
{
    unsigned const short size = 10;
    unsigned short tab[size][size] = {};


    for (int i = 0; i < size; ++i)
    {
        for (int k = 0; k < size; ++k)
        {
            tab[i][k] = rand() % 10;
            std::cout << tab[i][k] << " ";
        }
        std::cout << std::endl;
    }

    taskA(tab, size);
    std::cout << std::endl;
    taskB(tab, size);
    std::cout << std::endl;
}

