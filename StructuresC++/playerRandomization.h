//  playerRandomization.h
#pragma once

struct item
{
	int IDNum = 0;
	int gold = 0;
};

struct randPlayer 
{
	int ATK = 0;
	int DEF = 0;
	int EXP = 0;
	item invSlot[5];
};

randPlayer *randomPlayerGenerator(size_t len);
bool addItem(randPlayer * recepient, item gift);
bool hasItem(randPlayer * recepient, int ID);
float totalValue(randPlayer * holder);