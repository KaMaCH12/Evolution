class worm
{
    public:
	double speed;
	double energy;
	double sense;
	sf::Sprite sprite;
	sf::Texture texture;
	worm()
	{
	    sprite = new Sprite();
	    texture = new Texture();
	}
};
