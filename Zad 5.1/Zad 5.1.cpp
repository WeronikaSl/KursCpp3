#include "Zad5_1_solution.h"
#include <iostream>

int main()
{
    const int tabSize = 20;
    int tab[tabSize] = {};

    for (int i = 0; i < tabSize; i++)
    {
        tab[i] = rand() % 10 +1;
    }

    taskA(tab, tabSize);
    std::cout << std::endl;
    //taskB(tab, tabSize);
    //std::cout << std::endl;
    //taskC(tab, tabSize);
    //std::cout << std::endl;
    //taskD(tab, tabSize);
    //std::cout << std::endl;
    //taskE(tab, tabSize);
    //std::cout << std::endl;
    //taskF(tab, tabSize);
    //std::cout << std::endl;
    //taskG(tab, tabSize);
    //std::cout << std::endl;
    taskH(tab, tabSize, 3);
    std::cout << std::endl;
    taskHversionB(tab, tabSize, 3);
    std::cout << std::endl;
    taskI(tab, tabSize, 2);
    std::cout << std::endl;
    taskJ(tab, tabSize);
    std::cout << std::endl;






}

