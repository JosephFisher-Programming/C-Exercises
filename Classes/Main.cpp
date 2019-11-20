//  Main.cpp

#include <iostream>

#include "television.h"
#include "digitalPiggyBank.h"
#include "servers.h"

int main()
{
	Television tv;
	tv.increaseChannel();
	tv.increaseVolume();
	std::cout << tv.channel() << std::endl;
	std::cout << tv.volume() << std::endl << std::endl;

	DigitalPiggyBank pigBank;
	pigBank.deposit(100);
	std::cout << pigBank.balance() << std::endl;
	std::cout << pigBank.withdraw() << std::endl;
	std::cout << pigBank.balance() << std::endl << std::endl;

	ServerInfo serverOne;
	serverOne.regionID = 1;
	serverOne.currentPlayerCount = 5;
	serverOne.maxPlayers = 5;
	ServerInfo serverTwo;
	serverTwo.regionID = 2;
	serverTwo.currentPlayerCount = 3;
	serverTwo.maxPlayers = 5;
	ServerInfo serverThree;
	serverThree.regionID = 2;

	ServerInfo serverList[5];

	ServerFilter filterSearchConditions;
	filterSearchConditions.maxResults = 5;
	filterSearchConditions.specifyRegion = false;
	filterSearchConditions.regionSpecifier = 2;
	filterSearchConditions.allowEmpty = false;
	filterSearchConditions.allowFull = false;

	ServerBrowserService serverBrowser;
	serverBrowser.registerServer(serverOne);
	serverBrowser.registerServer(serverTwo);
	serverBrowser.registerServer(serverThree);

	std::cout <<serverBrowser.getServers(serverList,5, filterSearchConditions) << std::endl;

	while (true){}
	return 0;
}