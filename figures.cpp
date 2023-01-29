#include "figures.h"
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

void Sircle::sircle(unsigned int x, unsigned int y, float radius) {
    sf::RenderWindow window(sf::VideoMode({x, y}), "SFML works!");
    sf::CircleShape shape(radius);
    shape.setFillColor(sf::Color::Blue);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}
