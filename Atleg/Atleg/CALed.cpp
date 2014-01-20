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
	bool CALed::sprawdzOtrzymanaKolizje()
	{
		if(wystapilaKolizjaKola == true)
		{
			kolorLed = sf::Color(sf::Color(0,255,0));
			return true;
		}
		
	}
	void CALed::narysujKolo(sf::RenderWindow &oknoRenderu)
	{
		oknoRenderu.draw(kolo);
	}
	CALed::~CALed(void)
	{
	}
}