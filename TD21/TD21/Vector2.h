#pragma once
#include <iostream>
#include <vector>

class Vector2
{
public:
	float x;
	float y;

	Vector2();
	Vector2(float _x, float _y);
	~Vector2();

	float GetDistance(Vector2 a, Vector2 b);

	Vector2 AddVector2f(Vector2 a, Vector2 b);

	Vector2 SubstractVector2f(Vector2 a, Vector2 b);

	Vector2 MultiplyVector2f(Vector2 a, float b);

	Vector2 DivideVector2f(Vector2 a, float b);

	Vector2 Normalize(Vector2 v);

	float GetNorme(Vector2 a);

	float GetSignedAngleBetween(Vector2 a, Vector2 b);


private:

};

