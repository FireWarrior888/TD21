#include "Vector2.h"

float Vector2::GetDistance(sf::Vector2f a, sf::Vector2f b)
{
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

sf::Vector2f Vector2::AddVector2f(sf::Vector2f a, sf::Vector2f b)
{
	sf::Vector2f addVector2 = { a.x + b.x, a.y + b.y };
	return addVector2;
}

sf::Vector2f Vector2::SubstractVector2f(sf::Vector2f a, sf::Vector2f b)
{
	sf::Vector2f substractVector2 = { b.x - a.x, b.y - a.y };
	return substractVector2;
}

sf::Vector2f Vector2::MultiplyVector2f(sf::Vector2f a, float b)
{
	sf::Vector2f multiplyVector2 = { a.x * b, a.y * b };
	return multiplyVector2;
}

sf::Vector2f Vector2::DivideVector2f(sf::Vector2f a, float b)
{
	sf::Vector2f divideVector2 = { a.x / b, a.y / b };
	return divideVector2;
}

sf::Vector2f Vector2::Normalize(sf::Vector2f v)
{
	if (v == sf::Vector2f())
		return sf::Vector2f();
	else
		return DivideVector2f(v, GetNorme(v));
}

float Vector2::GetNorme(sf::Vector2f a)
{
	if (a == sf::Vector2f())
		return 0.f;
	else
		return sqrt(a.x * a.x + a.y * a.y);
}

float Vector2::GetSignedAngleBetween(sf::Vector2f a, sf::Vector2f b)
{
	return atan2f(a.x * b.y - a.y * b.x, a.x * b.x + a.y * b.y);
}