//  Vector2D.cpp

#include "Vector2D.h"
#include <math.h>

Vector2D Sum(Vector2D a, Vector2D b) 
{
	Vector2D answer = {0,0};

	answer.posX = a.posX + b.posX;
	answer.posY = a.posY + b.posY;
	return answer;
}

Vector2D Difference(Vector2D a, Vector2D b) 
{
	Vector2D answer = { 0,0 };

	answer.posX = a.posX - b.posX;
	answer.posY = a.posY - b.posY;
	return answer;
}

int Distance(Vector2D a, Vector2D b) 
{
	return pow((b.posX - a.posX)*(b.posX - a.posX) + (b.posY - a.posY)*(b.posY - a.posY),.5);
}