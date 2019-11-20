//  servers.cpp

#include "servers.h"

ServerInfo servers[50];

int serverCount = 0;

bool ServerBrowserService::registerServer(ServerInfo newServer) 
{
	if (serverCount > 49) 
	{
		return false;
	}
	servers[serverCount] = newServer;
	serverCount++;
	return true;
}

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize, ServerFilter filterSearch)
{
	int serversCopied = 0;

	for (int i = 0; i < dstSize; i++) 
	{
		if (i == serverCount || serversCopied == filterSearch.maxResults) 
		{
			return serversCopied;
		}

		if (filterSearch.specifyRegion == true) 
		{
			if (servers[i].regionID != filterSearch.regionSpecifier)
				continue;
		}

		if (filterSearch.allowEmpty == false) 
		{
			if (servers[i].currentPlayerCount == 0)
				continue;
		}

		if (filterSearch.allowFull == false)
		{
			if (servers[i].currentPlayerCount == servers[i].maxPlayers)
				continue;
		}

		if (servers[i].ping > filterSearch.pingLimit)
			continue;

		dstArray[serversCopied] = servers[i];
		serversCopied++;
	}
	return serversCopied;
}