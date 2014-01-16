/*
 * EEPROM.h
 *
 * Created: 2014-01-16 8:56:18
 *  Author: overkiller
  Licence: GNU GPLv3
 */ 
#ifndef EEPROM_H_
#define EEPROM_H_
#include <avr/eeprom.h>
#include <avr/io.h>
namespace EEPROM
{
	int EEMEM initialSpeed;
	/*
	 * Method will set blinking speed and will write it too eeprom
	 * 1 - 1s; 2 - 2s etc.
	 * Parameter is integer with will set speed of blinking and will be wrote to EEPROM
	 * 
	 */
	void setBlinkingSpeed(int speedToBeSet)
	{
		int tempSpeed = speedToBeSet;
		
		///TODO: WRITING TO EEPROM
	}
	
	
}





#endif // EEPROM_H_
