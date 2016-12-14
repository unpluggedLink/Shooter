#include <SFML/Graphics.hpp>
#include "Player.h"


int main()
{
	
	sf::RenderWindow window(sf::VideoMode(800, 600), "Testing Grounds");
	window.setFramerateLimit(60);
	
	
	

	Player playOne = Player();

	while (window.isOpen())
	{

		
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		playOne.movement();
		playOne.shoot();

		sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
		playOne.shape.setPosition(mousePosition.x, mousePosition.y);
		
	

	

		window.clear();
		window.draw(playOne.shape);
		window.draw(playOne.imgPlayer);
		window.display();
	}

	return 0;
}