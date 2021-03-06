#pragma once
#include"SFML/Graphics.hpp"
class Ball {
protected:
	sf::CircleShape circle;
	float radius = 20.f;
	float speedx = 2.5f;
	float speedy = -2.5f;
public:
	Ball();
	sf::CircleShape getShape();
	float getSpeedx();
	float getSpeedy();
	void update();
	sf::Vector2f getPosition();
	
};