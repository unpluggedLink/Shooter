#include "Player.h"
#include <SFML/Graphics.hpp>


Player::Player()
{
	speed = 10.0;
	imgPlayer.setRadius(20.0);
	imgPlayer.setFillColor(sf::Color::Yellow);
	shape.setRadius(10.f);
	shape.setFillColor(sf::Color::Green);
};

void Player::shoot()
{
	// Detect when mouse button is clicked
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		shooting = 1;
	else
		shooting = 0;

	if (shooting)
		shape.setFillColor(sf::Color::Red);
		//Action when "shooting"
	else
		shape.setFillColor(sf::Color::Green);
		//Action when not "shooting"
}
void Player::movement()
{	
	// Movement controls
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		imgPlayer.move(speed, 0);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		imgPlayer.move(-speed, 0);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		imgPlayer.move(0, speed);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		imgPlayer.move(0, -speed);
};