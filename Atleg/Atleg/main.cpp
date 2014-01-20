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
	while (window.isOpen())
    {
		Mouse::CAMouse::pobierzKoordynatyMyszy(window);
		Mouse::CAMouse::wyswietlKoordynaty();
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
		}
		led1.sprawdzOtrzymanaKolizje();
        window.clear();
		led1.narysujKolo(window);
        window.display();
    }

    return 0;
}
