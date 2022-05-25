#include <iostream>

int main()
{
    const int size1 = 3;
    const int size2 = 3;
    unsigned int tab[size1][size2] = { {1,2,3}, {4,5,6}, {7,8,9} };

    for (int i = 0; i < size1; ++i)
    {
        for (int k = 0; k < size2; ++k)
        {
            std::cout << tab[k][i];
        }
        std::cout << std::endl;
    }

}
