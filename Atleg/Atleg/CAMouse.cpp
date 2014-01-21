#include "CAMouse.h"
sf::Vector2i Mouse::CAMouse::koordynatyMyszy;
bool Mouse::CAMouse::byloKlikniecie = false;
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
	bool CAMouse::sprawdzCzyByloKlikniecie()
	{
		if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			std::cout << "Bylo Klikniecie\n" << std::endl;
			return true;
		}
		return false;
	}
	CAMouse::~CAMouse(void)
	{
	}
}