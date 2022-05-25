#include "Zad5_1_solution.h"
#include <iostream>

void taskA(int num[], int size)
{
	std::cout << "A: " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cout << num[i] << " ";
	}
}

void taskB(int num[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		std::cout << num[i] << " ";
	}

}

void taskC(int num[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (i % 2 != 0)
		{
			std::cout << num[i] << " ";
		}
	}

}
void taskD(int num[], int size)
{
	for (int i = 0; i < size; i+=3)
	{
		std::cout << num[i] << " ";
	}

}

void taskE(int num[], int size)
{
	unsigned int sum = 0;

	for (int i = 1; i < size; i++)
	{
		sum += num[i];
	}
	std::cout << sum << std::endl;


}

void taskF(int num[], int size)
{
	unsigned int sum = 0;

	for (int i = size; i >= (size - 5); --i)
	{
		if (num[i-1] > 3)
		{
			sum += num[i-1];
		}
	}
	std::cout << sum;
}

void taskG(int num[], int size)
{
	unsigned int sum = 0;
	unsigned short digitCounter = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += num[i];
		digitCounter++;
	
		if (sum > 10)
		{
			break;
		}
	}
	std::cout << "Ilość zsumowanych cyfr: " << digitCounter << std::endl;
}

void taskH(int num[], int size, unsigned short n) //wyswietla liczby o indeksach 0,3,6,9 itd (zaczynamy od pierwszej liczby)
{
	std::cout << "H: " << std::endl;

	for (int i = 0; i < size; i +=n)
	{
		std::cout << num[i] << " ";
	}
}

void taskHversionB(int num[], int size, unsigned short n) // wyswietla liczby o indeksach 2, 5, 8, 11 itd (zaczynamy od trzeciej liczby)
{
	std::cout << "H (versionB): " << std::endl;

	for (int i = (n-1); i < size; i += n)
	{
		std::cout << num[i] << " ";
	}
}

void taskI(int num[], int size, int m)
{
	std::cout << "I: " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		if (num[i] % m == 0)
		{
			std::cout << num[i] << " ";
		}
	}
}

void taskJ(int num[], int size) //bierzemy wartość i po kolei dodajemy, wyswietlamy ją i najbliższą z którą będzie suma 10
{
	std::cout << "J: " << std::endl;

	unsigned short value = 0; //zmienna pomocnicza przechowująca wartość, do której będziemy dodawać
	unsigned short howManyPairs = 0;
	
	for (int i = 0; i < size; ++i)
	{
		value = num[i];  // zapamiętuje wartość

		for (int k = (i+1); k < size; ++k) // k = (i+1) żeby szukało od i+1 do końca tablicy (np. gdy i = 5, to nie sprawdzi indeksów od 0 do 5)
		{
			if (10 == (value + num[k]))
			{
				howManyPairs++; //zliczy ile jest takich par
				std::cout
					<< "Pierwszy indeks: " << i << ", pierwsza wartość: " << value << std::endl
					<< "Drugi indeks: " << k << ", druga wartość: " << num[k] << std::endl;
				break; //gdy znajdzie parę to przerywa i bierze kolejną wartośc dla i
			}
			
		}
		std::cout << std::endl;
	}

	std::cout << "Takich par jest: " << howManyPairs << std::endl;
}


