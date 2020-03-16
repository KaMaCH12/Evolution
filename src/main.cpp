#include <SFML/Graphics.hpp>
#include <iostream>
#include "aux.hpp"
#include "simulation.hpp"


int main()
{
	sf::RenderWindow window(sf::VideoMode(800,800),"Evolution");
	custom_sprite TitleScreen("img/TitleScreen.png");
	custom_sprite StartButton("img/StartButton.png");
	StartButton.sprite.setOrigin(sf::Vector2f(StartButton.texture.getSize()/(unsigned int)2));
	StartButton.sprite.setPosition(400,700);

    while (window.isOpen())
    {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				sf::Vector2f mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));
				sf::FloatRect bounds = StartButton.sprite.getGlobalBounds();
				if (bounds.contains(mouse))
				{
					//przejscie do menu wyboru gatunkow
					simulation(&window);
				}
			}
			if (event.type == sf::Event::Closed)
			window.close();
		}
		window.clear();
		window.draw(TitleScreen.sprite);
		window.draw(StartButton.sprite);
		window.display();
    }
    return EXIT_SUCCESS;
}
