//  Main.cpp
#include "Utils.h"
#include <iostream>

int main() 
{
	helloWorld();
	std::cout << sqrInt(16) << std::endl;
	std::cout << fractionToDecimal(3, 5) << std::endl;
	pairPrint(1, 2);
	std::cout << threeIntSum(1, 2, 3) << std::endl;
	std::cout << minReturn(1,2) << std::endl;
	std::cout << maxReturn(99, 2) << std::endl;
	std::cout << clamperino(1,10,5) << std::endl;
	std::cout << distance(7,23,9, 0) << std::endl;
	std::cout << ETA(0, 0, 0, 4,2) << std::endl;

	while (true) {}
	return 0;
}