#include <iostream>
#include <math.h>

void printDoubleNum(double num) //123.456
{
    int numInteger = static_cast<int>(num); //123
    unsigned short numDigit = 0;

    while (numInteger > 0) //zliczamy ilość cyfr z całkowitej
    {
        numInteger /= 10;
        numDigit++;  //3 na koniec pętli
    }
    unsigned short singleDigit = 0;

    for (int i = 0; i < numDigit; i++) // działa ale idk czemu to 0 na początku xD
    {
        singleDigit = static_cast<unsigned short>(numInteger / (pow(10, (numDigit - i - 1))));
        std::cout << singleDigit;
        numInteger = static_cast<int>(num) - (singleDigit * (pow(10, (numDigit - i - 1)))); // znowu sobie rzutujemy, dostajemy 123, odejmujemy to co już wyświetlone
    }


    std::cout << ".";

    double numDouble = num - static_cast<int>(num); //dostajemy 0.456
    double storeValue = numDouble;

    while (numDouble > 0)
    {
        numDouble *= 10; // 4.56
        numDouble = static_cast<int>(numDouble); //4
        std::cout << numDouble;
        numDouble -= ;

    }





}


int main()
{
    double number = 0.0;
    std::cout << "Podaj liczbę typu double: ";
    std::cin >> number;

    printDoubleNum(number);
}

