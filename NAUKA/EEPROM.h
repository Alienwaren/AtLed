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
#include <avr/ctype.h>
namespace EEPROM
{
	int EEMEM initialSpeed = 1;
	/*
	 * Method will set blinking speed and will write it too eeprom
	 * 1 - 1s; 2 - 2s etc.
	 * Parameter is integer with will set speed of blinking and will be wrote to EEPROM
	 * 
	 */
	void setBlinkingSpeed(int speedToBeSet)
	{
		int tempSpeed = speedToBeSet;
		/*
		Check that input is not an letter.
		*/
		if(isdigit(tempSpeed))
		{
			eeprom_write_byte(0, tempSpeed);
			_delay_ms(5000); //for stability and for preserving eeprom lifetime
		}
		else
		{
			return;
		}
	
	}	
	
	/*
	 * Method will get blinking speed from EEPROM.
	 * 1 - 1s; 2 - 2s etc.
	 * Returns blinking speed integer
	 * 
	 */
	int getBlinkingSpeed()
	{
		int tempSpeed = eeprom_read_byte(0);
		_delay_ms(5000); //for stability and for preserving eeprom lifetime
		return tempSpeed;
	}

	
}





#endif // EEPROM_H_
