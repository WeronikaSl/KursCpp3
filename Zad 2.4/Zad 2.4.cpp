#include <iostream>
#include <string>

bool checkIfNumber(std::string num)
{
	bool result = false;
	
	for (int i = 0; i < num.length(); ++i)
	{
		if ((num[i] >= '0') && (num[i] <= '9'))
		{
			result = true;
		}
	
	}
	return result;
}

int main()
{
	//std::string number = {};
	//std::cout << "Podaj numer telefonu: ";
	//std::getline(std::cin >> std::ws, number);

	//unsigned short digitNum = number.length();

	////std::cout << number.front();

	//if ((8 == digitNum) && (number.front() != '0'))
	//{
	//	std::cout << "Numer jest prawidłowy." << std::endl;
	//}
	//else
	//{
	//	std::cout << "Numer nie jest prawidłowy." << std::endl;
	//}

	std::cout << checkIfNumber("sajkf8473");

}
