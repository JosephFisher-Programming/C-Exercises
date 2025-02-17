//  television.h
#pragma once

class Television 
{
private:
	int currentChannel = 0;
	int currentVolume = 0;

public:

	void increaseVolume();
	void decreaseVolume();

	int volume();

	void increaseChannel();
	void decreaseChannel();

	int channel();
};