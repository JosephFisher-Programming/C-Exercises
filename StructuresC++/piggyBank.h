//  piggyBank.h
#pragma once

struct piggyBank 
{
	int oneDollars;
	int twoDollars;
	int fiveDollars;
	int quarterCoins;
	int dimeCoins;
	int nickleCoins;
	int pennyCoins;
};

float calcPiggyBankDollars(piggyBank);
float calcPiggyBankCoins(piggyBank);
float calcPiggyBankTotal(piggyBank);