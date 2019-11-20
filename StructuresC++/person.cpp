// person.cpp
#include "person.h"

#include <iostream>

void printPersonInfo(person target) 
{
	std::cout << "Person" << std::endl;
	std::cout << "  Age : " << target.age << std::endl;
	std::cout << "  Csh : " << target.cash << std::endl;
	std::cout << "  Pts : " << target.points << std::endl;
}