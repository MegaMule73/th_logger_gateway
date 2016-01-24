// Display.h
#ifndef _DISPLAY_h
#define _DISPLAY_h

#include "Arduino.h"
#include "TFTLCD.h"

//#define INVERT_X
//#define INVERT_Y

#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0
// optional
#define LCD_RESET A4

#define	BLACK           0x0000
#define	BLUE            0x001F
#define	RED             0xF800
#define	GREEN           0x07E0
#define CYAN            0x07FF
#define MAGENTA         0xF81F
#define YELLOW          0xFFE0 
#define WHITE           0xFFFF

class Display
{
protected:
	TFTLCD tft;

public:
	Display();
	void init();
	void drawGrid();
};


#endif

