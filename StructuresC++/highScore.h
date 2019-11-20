//  highScore.h
#pragma once

struct highScoreData 
{
	int highScore;
	int timeToComplete;
};

int HighScore(highScoreData[], size_t len);
int avgCompletion(highScoreData[], size_t len);
void topScoreAssigner(highScoreData[], highScoreData[],size_t, size_t);
int diffInScore(highScoreData[], int entry);