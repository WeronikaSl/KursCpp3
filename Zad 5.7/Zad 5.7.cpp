#include <iostream>
//
//void chessboard1(unsigned short width = 8, unsigned short height = 8)
//{
//    for (int i = 0; i < width; ++i)
//    {
//        for (int k = 0; k < height; ++k)
//        {
//            if ()
//            {
//                std::cout << "o";
//            }
//            else
//            {
//
//            }
//        }
//        std::cout << std::endl;
//    }
//}

void drawBoard2(int a = 8)
{
    for (int i = 0; i < a; i++) 
    { 
        for (int j = 0; j < a; j++) 
        {
            if ((i + j) % 2 == 0) 
            {
                std::cout << "##";
            }
            else 
            {
                std::cout << "oo";
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    drawBoard2();
}

