/* 
	NFSettings.h - Library implementing settings and variables used in Novel Reflection program
*/
#ifndef NFSettings_h
#define NFSettings_h

#include <Arduino.h>

class NFSettings
{
    public:
		// INITIALISE
		static void begin();
		
		// TERMINATE
		static void finish();

//PUT YOUR LATITUDE, LONGITUDE, AND TIME ZONE HERE
  float latitude = 39.19;
  static float longitude = -78.16;
  static float timezone = -5;
  
		// CONSTANTS
		static BigNumber pi;
		static BigNumber piOverOneEighty;
		static BigNumber piOverTwo;
		static BigNumber piOverFour;
		static BigNumber piOverSix;
		static BigNumber rootThree;
		static BigNumber twoPlusRootThree;
		static BigNumber twoMinusRootThree;
		static BigNumber recipRootThree;
		static BigNumber minusOne;
		static BigNumber zero;
		static BigNumber one;
		static BigNumber two;
		static BigNumber three;
		
		//NFSettings();
		
	private:
};

#endif