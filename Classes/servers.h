//  servers.h
#pragma once

struct ServerInfo 
{
	int regionID = 0;
	int currentPlayerCount = 0;
	int maxPlayers = 0;
	int ping = 0;
};

struct ServerFilter 
{
	int maxResults = 50;
	int pingLimit = 1000;
	int regionSpecifier = 0;
	bool specifyRegion = false;
	bool allowEmpty = true;
	bool allowFull = true;
};

class ServerBrowserService 
{
private:
	ServerInfo servers[50];

	int serverCount = 0;

public:
	bool registerServer(ServerInfo newServer);

	int getServers(ServerInfo * dstArray, size_t dstSize, ServerFilter filterSearch);
};