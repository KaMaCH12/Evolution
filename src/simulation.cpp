#include <SFML/Graphics.hpp>
#include "aux.hpp"
#include "simulation.hpp"

void simulation(sf::RenderWindow* window_pointer)
{
    sf::RenderWindow window = *window_pointer;
    custom_sprite GameArea("img/GameArea.png");
    while (window.isOpen())
    {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			window.close();
		}
		window.clear();
		window.draw(GameArea.sprite);
		window.display();
    }
}