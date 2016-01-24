/*
 Name:		th_logger_gateway.ino
 Created:	1/19/2016 7:19:42 PM
 Author:	Joakim
*/

#include <TFTLCD.h>
#include "th_measurements.h"
#include "Display.h"


Display display;

void setup(void) {
	Serial.begin(115200);
	Serial.println("Here we go!");
	display.init();
	display.drawGrid();
}

void loop()
{
}