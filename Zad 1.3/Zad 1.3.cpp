#include <iostream>

int main()
{
    int a = 0;
    std::cin >> a;

    if (a > 0)
    {
        std::cout << "a jest większe od 0" << std::endl;
    }
    else if (a < 0)
    {
        std::cout << "a jest mniejsze od 0" << std::endl;
    }
    else 
    {
        std::cout << "a jest równe 0" << std::endl;
    }
}
