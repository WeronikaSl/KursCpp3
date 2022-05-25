#include <iostream>

//rysowanie trojkata prostokatnego
void drawFigureA(int l)
{
    for (int i = 0; i < l; i++) //przechodzenie po wierszach
    {
        //rysowanie w danym wierszu
        for (int j = 0; j <= i; j++) // licz wykonan petli zagniezdzonej jest zalezna od aktualnej wartosci i
        {
            std::cout << '*'; //rysujemy pojedyncza gwiazdke
        }
        std::cout << std::endl; //po narysowaniu w danej linii/wierszu przechodzimy do nastepnego wiersza
    }
}


void drawFigureB(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                std::cout << '*';
            }
            else
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}

void drawFigureC(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (i == 0 || i == l - 1 || j == 0 || j == l - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }

        }
        std::cout << "*" << std::endl;
    }
}

void drawFigureD(int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++) {
            if (j == i || j == h - i - 1) { // minus 1 musi być bo j nigdy nie przyjmie wielkości h (bo tamto jest od 0)
                std::cout << '*';
            }
            else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    drawFigureA(10);
}
