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
	bool CAMouse::czyBylaKolizja(sf::Vector2f koordynatyDoSprawdzenia, sf::Event &petlaZdarzen, sf::RenderWindow &oknoDoSprawdzenia)
	{
		sf::Vector2i koordynatyDoSprawdzeniaInt = static_cast<sf::Vector2i>(koordynatyDoSprawdzenia);
	
		/*if (petlaZdarzen.type == sf::Event::MouseButtonReleased && koordynatyMyszy.x > koordynatyDoSprawdzeniaInt.x && koordynatyMyszy.y > koordynatyDoSprawdzeniaInt.y)
		{
			std::cout << "Kolizja" << std::endl;
			return true;
		}else
		{
			std::cout << "Brak Kolizji" << std::endl;
			return false;
		}*/  
    sf::Vector2i windowPosition = oknoDoSprawdzenia.getPosition();
  
    if(mouseX > av_Sprite.getPosition().x + windowPosition.x && mouseX < ( av_Sprite.getPosition().x + av_Sprite.getGlobalBounds().width + windowPosition.x)
        && mouseY > av_Sprite.getPosition().y + windowPosition.y + 30  && mouseY < ( av_Sprite.getPosition().y + av_Sprite.getGlobalBounds().height + windowPosition.y + 30) )
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            return true;
        }
        return false;
    }
      
    return false;
  
}
	}
	CAMouse::~CAMouse(void)
	{
	}
}