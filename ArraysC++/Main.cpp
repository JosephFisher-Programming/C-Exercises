//  Main.cpp

#include "Utils.h"
#include <iostream>

int main() 
{
	int values[] {1,10,3,3,5,6};

	arrayPrint(values, 6);
	std::cout << "SUM: " << sumArray(values, 6) << std::endl;
	std::cout << "LARGEST: " << largestValue(values, 6) << std::endl;
	std::cout << "IDX: " << findValue(values, 6, 1, 2) << std::endl;
	std::cout << "ELEMENT COUNT: " << countElement(values, 6, 3, 0) << std::endl;
	if (uniqueArrayCheck(values, 6)) 
	{
		std::cout << "UNIQUE STATE: TRUE"<< std::endl;
	}
	else
	{
		std::cout << "UNIQUE STATE: FALSE" << std::endl;
	}

	arrayReversal(values,6);

	while (true) {}
	return 0;
}