//  Vector2D.h
#pragma once

struct Vector2D 
{
	float posX;
	float posY;
};

Vector2D Sum(Vector2D, Vector2D);
Vector2D Difference(Vector2D, Vector2D);
int Distance(Vector2D, Vector2D);