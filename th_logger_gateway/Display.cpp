// 
// 
// 

#include "Arduino.h"
#include "Display.h"

#define BOXSIZE 40
#define PENRADIUS 3

uint16_t const gridX = 10;
uint16_t const gridY = 40;
uint16_t const gridW = 240 - 2*gridX;
uint16_t const gridH = 320 - 2*gridY;
uint16_t const gridColor = GREEN;

void Display::init()
{
	tft.reset();
	tft.initDisplay();
	tft.fillScreen(BLACK);
	tft.setRotation(1);
}

void Display::drawGrid()
{
	int oldcolor, currentcolor;

	//tft.drawRect(gridX, gridY, gridW, gridH, gridColor);
	tft.drawString(0, 0, "Origo", gridColor, 4);
	tft.drawLine(40, 1, 240, 1, YELLOW);
	tft.fillRect(100, 200, 10, 30, WHITE);
	pinMode(13, OUTPUT);
}


Display::Display() : tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET) {
	
}