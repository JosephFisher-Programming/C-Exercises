//  playerVSZombie.cpp

#include "playerVSZombie.h"

int Attack(player a, player b) 
{
	return (b.attackPoints - a.defensePoints);
}