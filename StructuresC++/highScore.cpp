//  highScore.cpp

#include "highScore.h"

int HighScore(highScoreData playerScores[], size_t len)
{
 	int highestScore = -1;
	for (int i = 0; i < len; i++) 
	{
		if (playerScores[i].highScore > highestScore) 
		{
			highestScore = playerScores[i].highScore;
		}
	}
	return highestScore;
}

int avgCompletion(highScoreData playerScores[], size_t len)
{
	int avg = 0;

	for (int i = 0; i < len; i++)
	{
		avg += playerScores[i].timeToComplete;
	}

	return avg/len;
}
void topScoreAssigner(highScoreData playerScores[], highScoreData storage[], size_t len, size_t storSpace) 
{
	int highestScore[] = { -1,-1,-1,-1,-1 };

	for (int c = 0; c < storSpace; c++) 
	{
		for (int i = 0; i < len; i++)
		{
			if (playerScores[i].highScore > highestScore[c] && playerScores[i].highScore != highestScore[0] && playerScores[i].highScore != highestScore[1] && playerScores[i].highScore != highestScore[2] && playerScores[i].highScore != highestScore[3] && playerScores[i].highScore != highestScore[4])
			{
				highestScore[c] = playerScores[i].highScore;
			}
		}
		storage[c].highScore = highestScore[c];
	}
}
int diffInScore(highScoreData playerScores[], int entry) 
{
	int bigNum = HighScore(playerScores, 5);
	return bigNum - playerScores[entry].highScore;
}