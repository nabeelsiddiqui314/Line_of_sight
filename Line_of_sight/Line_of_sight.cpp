#include "stdafx.h"
#include "Application.h"

int main()
{
	sf::RenderWindow window;
	window.create(sf::VideoMode(800, 600), "Line Of Sight");

	while (window.isOpen()) {
		sf::Event evnt;
		while (window.pollEvent(evnt)) {
			if (evnt.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear();
		window.display();
	}
    return 0;
}

