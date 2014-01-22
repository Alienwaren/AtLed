#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include "CALed.h"
#include "Kolory.h"
#include "CAMouse.h"

int main()
{
	LED::CALed led1(50, Kolory::czerwony);
    sf::RenderWindow window(sf::VideoMode(800, 600), "TEST");
	window.setKeyRepeatEnabled(false);
	window.setFramerateLimit(60);
	while (window.isOpen())
    {
		sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
			if(sf::Keyboard::isKeyPressed(sf::Keyboard::M))
			{
				led1.sprawdzOtrzymanaKolizje(Mouse::CAMouse::sprawdzCzyByloKlikniecie());
			}
			if(sf::Keyboard::isKeyPressed(sf::Keyboard::K))
			{
				Mouse::CAMouse::pobierzKoordynatyMyszy(window);
				Mouse::CAMouse::wyswietlKoordynaty();
			}
			if(sf::Keyboard::isKeyPressed(sf::Keyboard::L))
			{
				sf::Vector2f koodrynatyTemp = led1.pobierzKoordynatyLedu();
				Mouse::CAMouse::czyBylaKolizja(koodrynatyTemp, event);
			}
			
		}
				
        window.clear();
		led1.narysujKolo(window);
        window.display();
    }

    return 0;
}
