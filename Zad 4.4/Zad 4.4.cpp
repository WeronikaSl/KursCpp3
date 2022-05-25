#include <iostream>
#include <string>

bool ifFiveChar(std::string name);
{
    int leng = name.length();
    if ((leng > 5) && (name.back() == 'r'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::cout << ifFiveChar("";)
}

