/* 
* RedLed.h
*
* Created: 2014-01-13 16:59:23
* Author: overkiller
*/


#ifndef __REDLED_H__
#define __REDLED_H__
#include <avr/io.h>

class RedLed
{
//variables
public:
protected:
private:
int MledState; //stan diody; 0 - wy³¹czona - 1 w³¹czona; potem zostanie wyœwietlona iloœæ ich na wyœwietlaczu segmentowym
int MpinNumber; //numer pinu leda;
char MportLetter; //litera portu pinu
//functions
public:
	RedLed();
	void lightLed(); ///zapalenie diody;
	void init(int pinNumber, char portLetter); /// inicjacja pinu
	~RedLed();
protected:
private:
	RedLed( const RedLed &c );
	RedLed& operator=( const RedLed &c );

}; //RedLed

#endif //__REDLED_H__
