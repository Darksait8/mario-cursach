#pragma once
#include <vector>
#include "render.h"
#include <SFML/Graphics.hpp>

class Map
{
public:
	Map(float cellSize = 32.0f);
	void createCheckBoard(size_t width, size_t height);
	void CreateFromImage(const sf::Image& image);
	void Draw(Renderer& renderer);

	std::vector<std::vector<int>> grid;
	float cellSize;
};

