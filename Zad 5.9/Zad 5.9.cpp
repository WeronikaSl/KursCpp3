#include <iostream>

char giveCharacter(char num[][10], const unsigned short size)
{
    char finalValue = 'a';
    for (int i = 0; i < size; ++i)
    {
        for (int k = 0; k < 10; ++k)
        {
            finalValue = num[size - i - 1][10 - k - 1]; // przebiegi pętli 1. num[4][9] 2. num[4][8] 3. num[4][7]
            return finalValue;
        }
    }

}

int main()
{
    const unsigned short tabSize1 = 5;
    const unsigned short tabSize2 = 10;
    char tab [tabSize1][tabSize2] = {};
    unsigned short charValue = 33; // 33 to w Ascii wykrzyknik

    for (int i = 0; i < tabSize1; ++i)
    {
        for (int k = 0; k < tabSize2; ++k)
        {
            tab[i][k] = static_cast<char>(charValue);
            std::cout << tab[i][k] << " ";
            charValue++; // będzie się zwiększać przy każdym przebiegu pętli więc przypisze po kolei znaki - 33,34, 35 itp.
        }
    }

    std::cout << std::endl;


    for (int i = 0; i < tabSize1; ++i)
    {
        for (int k = 0; k < tabSize2; ++k)
        {
            tab[i][k] = giveCharacter(tab, tabSize1); //funckcja nie zwróci tablicy, może tylko pojedynczy znak
            std::cout << tab[i][k] << " ";

        }
    }

    //for (int i = 0; i < tabSize1; ++i)
    //{
    //    for (int k = 0; k < tabSize2; ++k)
    //    {
    //        tab[i][k] = tab[tabSize1 - i - 1][10 - k - 1]; //funckcja nie zwróci tablicy, może tylko pojedynczy znak
    //        std::cout << tab[i][k] << " ";

    //    }
    //}



    //const unsigned short tabSize3 = 5;
    //const unsigned short tabSize4 = 10;
    //char tabB[tabSize3][tabSize4] = {}; // ma mieć przypisane od końca wartości z tab

    //for (int i = 0; i < tabSize3; ++i)
    //{
    //    for (int k = 0; k < tabSize4; ++k)
    //    {
    //        tabB[i][k] = giveCharacter(tab, tabSize1); //funckcja nie zwróci tablicy, może tylko pojedynczy znak
    //        std::cout << tabB[i][k] << " ";
    //       
    //    }
    //}


}

