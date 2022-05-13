#include <iostream>
#include <string>

bool palindrom(std::string word)
{
    unsigned int leng = word.length();

    for (int i = 0; i < leng/2; i++)
    {
        if (word[i] != word[leng -1 - i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}



int main()
{
    std::string word = {};

    std::cout << "Podaj ciąg znaków: ";
    std::getline(std::cin >> std::ws, word);
    std::cout << palindrom(word);
}

