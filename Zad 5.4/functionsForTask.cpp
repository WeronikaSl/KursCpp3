#include "functionsForTask.h"
#include <iostream>

void taskA(unsigned short tab[][10], unsigned short size)
{

    for (int i = 0; i < size; ++i)
    {
        for (int k = 0; k < size; ++k)
        {
            if (tab[i][k] == tab[i][k + 1])
            {
                unsigned short additionalK = k + 1;
                std::cout << "Para dla indeksów: [" << i << "],[" << k << "] i [" << i << "],[" << additionalK << "]  o wartości : " << tab[i][k] << std::endl;
            }
        }
        std::cout << std::endl;
    }
}

void taskB(unsigned short tab[][10], unsigned short size)
{

    for (int i = 0; i < size; ++i)
    {
        for (int k = 0; k < size; ++k)
        {
            if (tab[i][k] == tab[i + 1][k])
            {
                unsigned short additionalI = k + 1;
                std::cout << "Para dla indeksów: [" << i << "],[" << k << "] i [" << additionalI << "],[" << k << "]  o wartości : " << tab[i][k] << std::endl;
            }
        }
        std::cout << std::endl;
    }
}