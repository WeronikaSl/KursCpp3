#include <iostream>
#include <string>

std::string concatenateStrings(std::string str [], unsigned short tabSize, char c = '\n')
{
    std::string finalString = {};

    for (int i = 0; i < tabSize; ++i)
    {
        finalString += str[i];
        finalString += c;
    }
    return finalString;
}

int main()
{
    const short size = 5;
    std::string tab[size] = { {"abc"}, {"def"}, {"ghi"}, {"jkl"}, {"mno"} };

    std::cout << concatenateStrings(tab, size, '.') << std::endl;
}

