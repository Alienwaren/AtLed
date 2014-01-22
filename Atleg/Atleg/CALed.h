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
			void narysujKolo(sf::RenderWindow &oknoRenderu); //rysowanie naszego ko³a
			bool otrzymajKolizje(bool wystapilaKolizja); //otrzymanie kolizji z mysz¹
			bool sprawdzOtrzymanaKolizje(bool byloKlikniecie); //sprawdzenie tej kolizji
			void zmienKolorKola(); // zmiana koloru ko³a
			sf::Vector2f pobierzKoordynatyLedu(); //pobranie koordynat diody
			~CALed(void); //desktruktor
		protected:
			int rozmiar; //rozmiar ko³a naszego
			bool wystapilaKolizjaKola;
			sf::CircleShape kolo;//nasze ko³o
			sf::Color kolorLed; //kolor diodu
			sf::Vector2f koordynatyLed; //koordynaty diody
		private:
			CALed(void); //konstruktor domyœlny
	};
}
#endif //#ifndef H_CALED
