/*
 * LED.h
 *
 * Created: 2014-01-14 16:59:18
 *  Author: overkiller
  Licence: GNU GPLv3
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <avr/wdt.h>
#ifndef LED_H_
#define LED_H_
#define 	wdt_reset()   __asm__ __volatile__ ("wdr")
#define 	WDTO_15MS   0
#define 	WDTO_30MS   1
#define 	WDTO_60MS   2
#define 	WDTO_120MS   3
#define 	WDTO_250MS   4
#define 	WDTO_500MS   5
#define 	WDTO_1S   6
#define 	WDTO_2S   7
#define 	WDTO_4S   8
#define 	WDTO_8S	  9
/*
*Method will blink the led with desired pattern. 
*Bitmask = starting value for led blinking
*howMuchBlink = amount of "blinks"
*willStop = will ever blinking stop?
*
*
*/
namespace LED
{
	
void blink(int bitMask, int howMuchBlink, char willStop)
{
	wdt_disable();
	int actualBlink = 0;
		while(true)
		{
		PORTC = bitMask; //0b00000001;
		_delay_ms(1000);
		PORTC = (bitMask<<1); //0b00000010;
		_delay_ms(1000);
		actualBlink++;
		if(actualBlink == howMuchBlink)
		{
			if(willStop == 'Y' || willStop == 'y')
			{
				
				while (1)
				{
					PORTC = 0x0;
		
				}			
			}else if (willStop == 'n' || willStop == 'N')
			{
				continue;
				
			} 
			else
			{
				continue;
				
			}

		
		
		}	
	    
	}
}

/*
*Method will blink the both leds.
*Bitmask = starting value for led blinking
*howMuchBlink = amount of "blinks"
*willStop = will ever blinking stop?
*
*
*/

void blinkNormal(int bitMask, int howMuchBlink, char willStop)
{
	wdt_disable();
	int actualBlink = 0;
	while(true)
	{
		PORTC = bitMask + 2;
		_delay_ms(1000);
		PORTC = !bitMask;
		_delay_ms(1000);
		actualBlink++;

			if(actualBlink == howMuchBlink)
			{
				if(willStop == 'Y' || willStop == 'y')
				{
					while (1)
					{
						PORTC = 0x0;
						
					}
				}else if (willStop == 'n' || willStop == 'N')
				{
					continue;
					
				}
				else
				{
					continue;
				
				}
				}
			}
			
}

}

#endif /* LED_H_ */