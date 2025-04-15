#include "camera.h"
#include <SFML/Graphics.hpp>

Camera::Camera(float zoomLevel) : zoomlevel(zoomLevel) {}

sf::View Camera::getView(sf::Vector2u windowSize) {
    float aspect = (float)windowSize.x / (float)windowSize.y;
    sf::Vector2f size;

    if (aspect < 1.0f) {
        size = sf::Vector2f(zoomlevel, zoomlevel / aspect);
    }
    else {
        size = sf::Vector2f(zoomlevel * aspect, zoomlevel);
    }

    return sf::View(position, size);
}
