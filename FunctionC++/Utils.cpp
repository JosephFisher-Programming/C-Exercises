//  Utils.cpp.

#include "Utils.h"

void helloWorld()
{
	std::cout << "Hello Functions" << std::endl;
}

void pairPrint(int a, int b) 
{
	std::cout << a << "," << b << std::endl;
}

float sqrInt(int a)
{
	return sqrt((double)a);
}

float fractionToDecimal(int numerator, int denominator)
{
	return ((float)numerator / (float)denominator);
}

int threeIntSum(int a, int b, int c) 
{
	return (a + b + c);
}

int minReturn(int a, int b) 
{
	if (a <= b) 
	{
		return a;
	}
	else
	{
		return b;
	}
}

int maxReturn(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int clamperino(int a, int b, int c) 
{
	if (c < a) 
	{
		return a;
	}
	else if (c > b) 
	{
		return b;
	}
	else
	{
		return c;
	}
}

float distance(int pointX1, int pointY1, int pointX2, int pointY2) 
{
	return sqrt(((pointX2 - pointX1) * (pointX2 - pointX1)) + ((pointY2 - pointY1) * (pointY2 - pointY1)));
}

float ETA(int a, int b, int c, int d, int sped) 
{
	return (distance(a, b, c, d) / sped);
}