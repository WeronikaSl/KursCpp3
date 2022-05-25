#include "functions.h"
#include "math.h"

int power(int a, int b)
{
	if (b < 0)
	{
		return -1;
	}

	if (0 == b)
	{
		return 1;
	}

	int r = 1;

	for (int i = 0; i < b; i++)
	{
		r *= a;
	}
	return r;
}

float power(float a, float b)
{
	return static_cast<float>(pow(a, b));
}

double power(double a, double b)
{
	return pow(a, b);
}