//  playerVSZombie.h
#pragma once

struct player 
{
	int currentHealth;
	int attackPoints;
	int defensePoints;
};

int Attack(player, player);