#include <SFML/Graphics.hpp>
#include <string>
#include "aux.hpp"

custom_sprite::custom_sprite(std::string filename)
{
	texture.loadFromFile(filename);
	sprite.setTexture(texture);
}
