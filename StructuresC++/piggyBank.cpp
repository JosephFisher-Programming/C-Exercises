//  piggyBank.cpp

#include "piggyBank.h"

float calcPiggyBankDollars(piggyBank money) 
{
	float total = 0;
	total = ((money.oneDollars) + (money.twoDollars * 2) + (money.fiveDollars * 5));
	return total;
}
float calcPiggyBankCoins(piggyBank money)
{
	float total = 0;
	total = ((money.quarterCoins * .25) + (money.dimeCoins * .1) + (money.nickleCoins * .05) + (money.pennyCoins * .01));
	return total;
}
	float calcPiggyBankTotal(piggyBank money) 
	{
		float total = 0;
		total = ((money.oneDollars) + (money.twoDollars * 2) + (money.fiveDollars * 5) + (money.quarterCoins * .25) + (money.dimeCoins * .1) + (money.nickleCoins * .05) + (money.pennyCoins * .01));
		return total;
	}