#include <iostream>
#include <string>

int main()
{
    std::string word = "Angielski";
    char storeChar = 'a';
    storeChar = word.front();
    word.front() = word.back();
    word.back() = storeChar;

    std::cout << word << std::endl;


}

