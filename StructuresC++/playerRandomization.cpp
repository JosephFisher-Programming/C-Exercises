//  playerRandomization.cpp

#include "playerRandomization.h"
#include <stdlib.h>
#include <time.h> 

randPlayer *randomPlayerGenerator(size_t len) 
{
	randPlayer * players = new randPlayer[len];
	srand(time(NULL));

	for (int i = 0; i < len; i++) 
	{
		players[i].ATK = rand() % 10 + 1;
		players[i].DEF = rand() % 5 + 1;
		players[i].EXP = rand() % 100 + 1;
	}

	return players;
}

bool addItem(randPlayer * recepient, item gift) 
{
		for (int j = 0; j < 5; j++) {

			if (recepient->invSlot[j].IDNum != gift.IDNum && recepient->invSlot[j].IDNum == NULL)
			{
				recepient->invSlot[j] = gift;
				return true;
			}
		}
	return false;
}
bool hasItem(randPlayer * recepient, int ID) 
{
		for (int j = 0; j < 5; j++) 
		{
			if (recepient->invSlot[j].IDNum == ID)
				return true;
		}
	return false;
}

float totalValue(randPlayer * holder) 
{
	float total = 0;

		for (int j = 0; j < 5; j++) 
		{
			if (holder->invSlot[j].IDNum == 1 || holder->invSlot[j].IDNum == 2)
			total += holder->invSlot[j].gold;
		}
	return total;
}