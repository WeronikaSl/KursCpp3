#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "You have entered " << argc << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i)
        std::cout << argv[i] << "\n";

    int sum = 0;
    for (int i = 1; i < argc; ++i)
    {
        std::cout << static_cast<int>(argv[i][0]);
    }
}
