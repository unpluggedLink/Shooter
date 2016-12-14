#pragma once
#include <SFML/Graphics.hpp>

class Player 
{
	public:
		
		Player();
		void movement();
		void shoot();
		sf::CircleShape imgPlayer;
		sf::CircleShape shape;

	private:
		
		int speed;
		bool shooting;

};