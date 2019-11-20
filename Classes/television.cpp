//  television.cpp

#include "television.h"

static int currentChannel = 0;

static int currentVolume = 0;


void Television::increaseVolume()
{
	currentVolume++;
}

void Television::decreaseVolume()
{
	currentVolume--;
}

int Television::volume()
{
	return currentVolume;
}

void Television::increaseChannel()
{
	currentChannel++;
}

void Television::decreaseChannel()
{
	currentChannel--;
}

int Television::channel()
{
	return currentChannel;
}