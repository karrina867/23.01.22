#include"boll.h"
#include"const.h"

Ball::Ball(){
	circle.setRadius(radius);
	circle.setPosition(WINDOW_HIGHT / 2 - radius,
		               WINDOW_HIGHT / 2 - radius);
	circle.setFillColor(sf::Color::Yellow);
}
sf::CircleShape Ball::getShape() { return circle; }
float Ball::getSpeedx()          { return speedx;}
float Ball::getSpeedy()          { return speedy;}

sf::Vector2f Ball::getPosition() { return circle.getPosition(); }
void Ball::update() {
	circle.move(speedx, speedy);
	if (getPosition().x<=0|| getPosition().x + 2 * radius >= WINDOW_HIGHT) {
		speedx = -speedx;
	}	
	if (getPosition().y + 2 * radius >= WINDOW_HIGHT|| getPosition().y<= 0) {
		speedy = -speedy;
	}	
};