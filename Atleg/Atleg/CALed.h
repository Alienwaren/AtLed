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
			CALed(int rozmiarLedu, sf::Color kolorKola); //konstruktor pozwalaj�cy na zmiane koloru i rozmiaru ko�a
			void narysujKolo(sf::RenderWindow &oknoRenderu); //rysowanie naszego ko�a
			bool otrzymajKolizje(bool wystapilaKolizja); //otrzymanie kolizji z mysz�
			bool sprawdzOtrzymanaKolizje(bool byloKlikniecie); //sprawdzenie tej kolizji
			void zmienKolorKola(); // zmiana koloru ko�a
			sf::Vector2f pobierzKoordynatyLedu(); //pobranie koordynat diody
			~CALed(void); //desktruktor
		protected:
			int rozmiar; //rozmiar ko�a naszego
			bool wystapilaKolizjaKola;
			sf::CircleShape kolo;//nasze ko�o
			sf::Color kolorLed; //kolor diodu
			sf::Vector2f koordynatyLed; //koordynaty diody
		private:
			CALed(void); //konstruktor domy�lny
	};
}
#endif //#ifndef H_CALED
