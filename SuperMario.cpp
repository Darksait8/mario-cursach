#include <SFML/Graphics.hpp>
#include "Game.h"
#include "camera.h"
#include "render.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Mario bros");
	sf::Clock deltaClock;
	Camera camera;
	Renderer renderer(window);

	//begin(window);
	while (window.isOpen())
	{
		float deltaTime = deltaClock.restart().asSeconds();
		sf::Event event{};
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			
			window.setView(camera.getView(window.getSize()));
			update(deltaTime);
			
			window.clear(sf::Color::White);
			Render(renderer);
			begin(window);
			window.display();
			

		}

	}


}