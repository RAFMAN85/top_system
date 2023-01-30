#include "figures.h"
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

void Sircle::sircle(unsigned int x, unsigned int y, float radius) {
    sf::RenderWindow window(sf::VideoMode({x, y}), "Figure");
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


void Rectangle::rectangle(unsigned int x, unsigned int y, float x_fig, float y_fig) {
    sf::RenderWindow window(sf::VideoMode({x, y}), "Figure");
    sf::RectangleShape shape({x_fig,y_fig});
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

void Multi_shape::multy_shape(unsigned int x, unsigned int y, float x_fig, float y_fig) {
    sf::RenderWindow window(sf::VideoMode({x, y}), "Figure");
    sf::CircleShape triangle(x_fig, y_fig);
    triangle.setFillColor(sf::Color::Blue);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(triangle);
        window.display();
    }
}

