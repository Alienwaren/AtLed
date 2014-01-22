#ifndef H_CAMOUSE
#define H_CAMOUSE
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <iostream>
#include "CALed.h"
#include <vector>
namespace Mouse
{
	class CAMouse
	{
		public:
				CAMouse(void);
				~CAMouse(void);
				void static wyswietlKoordynaty();
				void static pobierzKoordynatyMyszy(sf::RenderWindow &renderWindow);
				static bool sprawdzCzyByloKlikniecie();
				static bool czyBylaKolizja(sf::Vector2f koordynatyDoSprawdzenia, sf::Event &petlaZdarzen, sf::RenderWindow &oknoDoSprawdzenia);
		private:
				static bool byloKlikniecie;
				sf::Vector2i static koordynatyMyszy;
	};
}
#endif //H_CAMOUSE
