#include <iostream>
#include <time.h>

int main()
{
    const unsigned short tabSize = 10;
    double tab[tabSize][tabSize] = {};

    //int value = 1;
    //for (int i = 0; i < tabSize; ++i)
    //{
    //    for (int k = 0; k < tabSize; k++)
    //    {
    //        
    //        tab[i][k] = static_cast<double>(value);
    //        std::cout << tab[i][k] << " ";
    //        value += 1;

    //    }
    //}

    srand(time(NULL));

    //for (int i = 0; i < tabSize; ++i)
    //{
    //    for (int k = 0; k < tabSize; ++k)
    //    {
    //        tab[i][k] = static_cast<double>(rand());
    //        std::cout << tab[i][k] << " ";

    //    }
    //}

    //for (int i = 0; i < tabSize; ++i)
    //{
    //    for (int k = 0; k < tabSize; ++k)
    //    {
    //        tab[i][k] = static_cast<double>(rand() %); rand() % 6 - 1,5; - będzie od 1,5 do 3
    //        std::cout << tab[i][k] << " ";
    //    }
    //}

    for (int i = 0; i < tabSize; ++i)
    {
        for (int k = 0; k < tabSize; ++k)
        {
            int valueSum = (i + k) /100; //czemu ciągle wyświetla zero?
            tab[i][k] = valueSum;
            std::cout << tab[i][k] << " ";
        }
    }

}

