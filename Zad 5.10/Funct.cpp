#include "Funct.h"
#include <iostream>

void addArrays(int tab1[], int tab2[], short size) //dodaje pojedyncze indeksy i je wyświetla
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum = tab1[i] + tab2[i];
        std::cout << sum << std::endl;
    }
}

void addArrays2(int tab1[], int tab2[], short size) //sumuje wszystkie liczby z dwóch tablic i wyświetla sumę
{
    int sumIndex = 0;
    int sumBothArrays = 0;

    for (int i = 0; i < size; ++i)
    {
        sumIndex = tab1[i] + tab2[i];
        sumBothArrays += sumIndex;
       
    }
    std::cout << sumBothArrays << std::endl;
}