/*
 * NAUKA.cpp
 *
 * Created: 2013-12-22 14:17:25
 *  Author: overkiller/Damian Kaczyñski
 * Licence: GNU GPLv3
 * 
 *
 *
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include "LED.h"
#include "EEPROM.h"
int init()
{
	struct returnValues
	{
		int blinkingSpeed; ///to be read from EEPROM
		int bitmask; 
	}eepromSpeedBitmask;
	eepromSpeedDataC.blinkingSpeed = getBlinkingSpeed();
	eepromSpeedDataC.Bitmask = 0b00000001;
	DDRC = 0b11111111;
	return eepromSpeedDataC;
}

int main(void)
{
	struct mainValues
	{
		int blinkingSpeed; ///to be read from EEPROM
		int bitmask;
	}eepromSpeedBitmaskMain;
	
	eepromSpeedBitmaskMain = init();
    while(1)
    {

		//LED::blink(bitmask, 2, 'n');
		//_delay_ms(1000);
		LED::blinkNormal(eepromSpeedBitmaskMain.bitmask, 3, 'y', eepromSpeedBitmaskMain.blinkingSpeed);
		
    }

}

