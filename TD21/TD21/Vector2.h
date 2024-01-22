#pragma once
#include <iostream>
#include <vector>

class Vector2
{
public:
	float GetDistance(sf::Vector2f a, sf::Vector2f b);

	sf::Vector2f AddVector2f(sf::Vector2f a, sf::Vector2f b);

	sf::Vector2f SubstractVector2f(sf::Vector2f a, sf::Vector2f b);

	sf::Vector2f MultiplyVector2f(sf::Vector2f a, float b);

	sf::Vector2f DivideVector2f(sf::Vector2f a, float b);

	sf::Vector2f Normalize(sf::Vector2f v);

	float GetNorme(sf::Vector2f a);

	float GetSignedAngleBetween(sf::Vector2f a, sf::Vector2f b);


private:

};

