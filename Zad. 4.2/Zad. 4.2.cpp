#include <iostream>

std::string convertCharArrayToString(char cTab[][7], int a, int b)
{
    std::string name = {};

    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < b; k++)
        {
            name += cTab[i][k];
        }
        name += '\n';
    }
    return name;
}


int main()
{
    const int tabSize1 = 4;
    const int tabSize2 = 7;
    char sign[tabSize1][tabSize2] = { "123456", "123456", "123456", "123456"};

    std::cout << convertCharArrayToString(sign, tabSize1, tabSize2);

}

