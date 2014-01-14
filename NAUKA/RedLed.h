/* 
* RedLed.h
*
* Created: 2014-01-13 16:59:23
* Author: overkiller
*/


#ifndef __REDLED_H__
#define __REDLED_H__
#include <avr/io.h>
namespace LED
{
class RedLed
{
//variables
public:
protected:
private:
int MledState; //stan diody; 0 - wyłączona - 1 włączona; potem zostanie wyświetlona ilość ich na wyświetlaczu segmentowym
int MpinNumber; //numer pinu leda;
char MportLetter; //litera portu pinu
//functions
public:
	RedLed();
	void lightLed(); ///zapalenie diody;
	void init(int pinNumber, char portLetter); /// inicjacja pinu
	void turnOffLed(); ///wyłączenie diody
	//void blink(int delayLenght); ///mryganie
	~RedLed();
protected:
private:
	RedLed( const RedLed &c );
	RedLed& operator=( const RedLed &c );

}; //RedLed
}
#endif //__REDLED_H__
