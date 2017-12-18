
//This is an example for our Monochrome OLEDs based on SSD1306 drivers
//Written by Lee  for Uctronics Industries.  

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <ArducamSSD1306.h>
// If using software SPI (the default case):
#define OLED_MOSI   9
#define OLED_CLK   10
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13
ArducamSSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

/* Uncomment this block to use hardware SPI
#define OLED_DC     6
#define OLED_CS     7
#define OLED_RESET  8
Adafruit_SSD1306 display(OLED_DC, OLED_RESET, OLED_CS);
*/

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2

#define LOGO16_GLCD_HEIGHT 16 
#define LOGO16_GLCD_WIDTH  16 

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup()   {                
  Serial.begin(9600);

  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC);
  
  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(20,2);
  display.println("0.96 OLED 128X64");
  display.setCursor(20,25);
  display.println("Hello, Arducam!");
  display.setCursor(10,45);
  display.println("support@arducam.com");
  display.display();
}


void loop() {
  ;
}
