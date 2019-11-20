//  digitalPiggyBank.cpp

#include "digitalPiggyBank.h"

float currentBalance = 0;

void  DigitalPiggyBank::deposit(float net) 
{
	currentBalance += net;
}

float DigitalPiggyBank::withdraw() 
{
	float theAnswer;
	theAnswer = currentBalance;
	currentBalance = 0;
	return theAnswer;
}

float DigitalPiggyBank::balance() 
{
	return currentBalance;
}