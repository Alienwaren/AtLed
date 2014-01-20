#include "CAMouse.h"
sf::Vector2i Mouse::CAMouse::koordynatyMyszy;
namespace Mouse
{
	CAMouse::CAMouse(void)
	{
	}
	void CAMouse::pobierzKoordynatyMyszy(sf::RenderWindow &renderWindow)
	{
		koordynatyMyszy = sf::Mouse::getPosition(renderWindow);
	}
	void CAMouse::wyswietlKoordynaty()
	{
		std::cout << "Koordynaty myszy " << koordynatyMyszy.x << " " << koordynatyMyszy.y << " \r";
	}
	CAMouse::~CAMouse(void)
	{
	}
}