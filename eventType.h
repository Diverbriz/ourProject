#pragma once
#include <SFML/Graphics.hpp>

using namespace std;

class eventType
{
public:
private:
    sf::RenderWindow* _window;
    sf::CircleShape shape;
public:
    eventType(sf::RenderWindow* window) : _window(window) {}
    
    
	void closeShape() {
       
        shape.setRadius(40.f);
        shape.setPosition(100.f, 100.f);
        shape.setFillColor(sf::Color::Cyan);

        while (_window->isOpen()) {

            sf::Event event;
            while (_window->pollEvent(event)) {

                if (event.type == sf::Event::Closed)
                    _window->close();
            }

            draw();
        }
   }

    void draw()
    {
        _window->clear();
        _window->draw(shape);
        _window->display();   
    }

};
//window(sf::VideoMode(640, 480), "SFML Application");
