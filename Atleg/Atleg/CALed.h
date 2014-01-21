#ifndef H_CALED
#define H_CALED
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include "CAMouse.h"
namespace LED
{
	/*
	Klasa tworzy nasze diody.
	*/
	class CALed
	{
		public:
			CALed(int rozmiarLedu, sf::Color kolorKola); //konstruktor pozwalaj¹cy na zmiane koloru i rozmiaru ko³a
			void narysujKolo(sf::RenderWindow &oknoRenderu);
			bool otrzymajKolizje(bool wystapilaKolizja);
			bool sprawdzOtrzymanaKolizje(bool byloKlikniecie);
			void zmienKolorKola();
			~CALed(void);
		protected:
			int rozmiar; //rozmiar ko³a naszego
			bool wystapilaKolizjaKola;
			sf::CircleShape kolo;//nasze ko³o
			sf::Color kolorLed;
		private:
			CALed(void); //konstruktor domyœlny
	};
}
#endif //#ifndef H_CALED
