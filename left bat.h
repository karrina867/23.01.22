#pragma once
#include "bat.h"
#include"SFML/Graphics.hpp"


class LeftBat : public Bat {
public:
	LeftBat(float startx,float starty) :Bat(startx,starty) {}
	void update() {
		int currentx = rect.getPosition().x;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			rect.move(0, -speedy);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
			rect.move(0, speedy);
		}
		if (rect.getPosition().y <= 0) { rect.setPosition(currentx, 0); }
		if (rect.getPosition().y + height >= WINDOW_HIGHT) {
			rect.getPosition(currentx, WINDOW_HIGHT - height);
		}
	}
};