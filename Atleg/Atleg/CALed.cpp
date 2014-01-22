#include "CALed.h"

namespace LED
{

	CALed::CALed(void)
		:
			rozmiar(0), wystapilaKolizjaKola(false), kolorLed(sf::Color(255,0,0))
	{
	}
	CALed::CALed(int rozmiarLedu, sf::Color kolorKola)
		:
			rozmiar(rozmiarLedu), wystapilaKolizjaKola(false), kolorLed(kolorKola)
	{
		kolo.setRadius(rozmiar);
		kolo.setFillColor(kolorLed);
	}
	bool CALed::otrzymajKolizje(bool wystapilaKolizja)
	{
		wystapilaKolizjaKola = wystapilaKolizja;
		return wystapilaKolizjaKola;
	}
	bool CALed::sprawdzOtrzymanaKolizje(bool byloKlikniecie)
	{
		if(/*wystapilaKolizjaKola == true && */byloKlikniecie == true)
		{
			sf::Color aktualnyKolor = kolo.getFillColor();
			if(aktualnyKolor == sf::Color(255,0,0))
			{
				kolorLed = sf::Color(sf::Color(255,225,225));
				kolo.setFillColor(kolorLed);
				return true;

			}else if(aktualnyKolor == sf::Color(255,0,0))
			{
				kolorLed = sf::Color(255,0,0);
				kolo.setFillColor(kolorLed);
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		return false;
		
	}
	void CALed::narysujKolo(sf::RenderWindow &oknoRenderu)
	{
		oknoRenderu.draw(kolo);
	}
	sf::Vector2f CALed::pobierzKoordynatyLedu()
	{
		koordynatyLed = kolo.getPosition();
		std::cout << koordynatyLed.x << " " << koordynatyLed.y << std::endl;
		return koordynatyLed;
	}
	CALed::~CALed(void)
	{
	}
}