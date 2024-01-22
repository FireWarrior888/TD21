#include "Vector2.h"

Vector2::Vector2()
{
}

Vector2::Vector2(float _x, float _y)
{
	x = _x;
	y = _y;
}

Vector2::~Vector2()
{
}

float Vector2::GetDistance(Vector2 a, Vector2 b)
{
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

Vector2 Vector2::AddVector2f(Vector2 a, Vector2 b)
{
	Vector2 addVector2 = { a.x + b.x, a.y + b.y };
	return addVector2;
}

Vector2 Vector2::SubstractVector2f(Vector2 a, Vector2 b)
{
	Vector2 substractVector2 = { b.x - a.x, b.y - a.y };
	return substractVector2;
}

Vector2 Vector2::MultiplyVector2f(Vector2 a, float b)
{
	Vector2 multiplyVector2 = { a.x * b, a.y * b };
	return multiplyVector2;
}

Vector2 Vector2::DivideVector2f(Vector2 a, float b)
{
	Vector2 divideVector2 = { a.x / b, a.y / b };
	return divideVector2;
}

Vector2 Vector2::Normalize(Vector2 v)
{
	if (GetNorme(v) != 0)
		return DivideVector2f(v, GetNorme(v));
	else 
		return Vector2();
	
}

float Vector2::GetNorme(Vector2 a)
{
	return sqrt(a.x * a.x + a.y * a.y);
}

float Vector2::GetSignedAngleBetween(Vector2 a, Vector2 b)
{
	return atan2f(a.x * b.y - a.y * b.x, a.x * b.x + a.y * b.y);
}