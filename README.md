# Arducam_SSD1306

I2C Mode:

R1,R4,R6,R7:4.7K

R8, 0K


D0 -> SCL

D1 -> SDA

RES -> 3.3/5V

VCC -> 3.3/5V

GND -> GND

SPI Mode:
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

