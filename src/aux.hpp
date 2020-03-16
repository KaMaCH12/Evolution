#include <SFML/Graphics.hpp>
#include <string>

class custom_sprite
{
    public:
	sf::Texture texture;
	sf::Sprite sprite;
	custom_sprite(std::string);
};