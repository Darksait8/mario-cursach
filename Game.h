#pragma once
#include <SFML/Graphics.hpp>
#include "render.h"
#include "Camera.h"
extern Camera camera;
void begin(const sf::Window& window);
void update(float deltaTime);
void Render(Renderer& renderer);