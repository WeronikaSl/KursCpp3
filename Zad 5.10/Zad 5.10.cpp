#include <iostream>
#include "Funct.h"

int main()
{
    const short size = 5;
    int tab1[size] = {1,2,3,4,5};
    int tab2[size] = {6,7,8,9,10};

    addArrays(tab1, tab2, size);
    std::cout << std::endl;
    addArrays2(tab1, tab2, size);

}
