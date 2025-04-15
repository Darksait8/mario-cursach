#include "Game.h"
#include "Map.h"
#include "Resources.h"
#include <filesystem>
sf::Texture texture;
Map map(16.0f);
Camera camera(320.2f);

void begin(const sf::Window& window)
{
	for (auto& file : std::filesystem::directory_iterator("./resources/textures/"))
	{
		if (file.is_regular_file() && (file.path().extension() == ".png" || file.path().extension() == ".jpg"))
			Resources::textures[file.path().filename().string()].loadFromFile(file.path().string());
	}
	sf::Image image;
	image.loadFromFile("resources/textures/1.png");
	map.CreateFromImage(image);

	camera.position = sf::Vector2f(160.0f, 160.0f);
}
void update(float deltaTime)
{

}
void Render(Renderer& renderer)
{
	map.Draw(renderer);
}