#pragma once
#include "settings.h"

class Game {
private:
	sf::RenderWindow window;
	void checkEvents() {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window.close();
		}
	}
	void update(){}
	void checkCollisions(){}
	void draw() {
		window.clear();

		window.display();
	};

public:
	Game() {
		window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
		window.setFramerateLimit(FPS);
	}
	void play() {
		while (window.isOpen())
		{
			checkEvents();
			update();
			checkCollisions();
			draw();
		}
	}
};