
// Import required libraries
#include <ArducamSSD1306.h>    // Modification of Adafruit_SSD1306 for ESP8266 compatibility
#include <Adafruit_GFX.h>   // Needs a little change in original Adafruit library (See README.txt file)
#include <Wire.h>           // For I2C comm, but needed for not getting compile error

/*
I2C Mode:
R1,R4,R6,R7:4.7K
R8, 0K



D0  SCL
D1  SDA
RES  PIN7
VCC  3.3/5V
GND  GND
*/

// Pin definitions
#define OLED_RESET  7  // Pin 7 -RESET digital signal

ArducamSSD1306 display(OLED_RESET); // FOR I2C


void setup(void)
{
// Start Serial
Serial.begin(115200);

  // SSD1306 Init
  display.begin();  // Switch OLED
  // Clear the buffer.
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
    display.setCursor(20,2);
  display.println("0.96 OLED 128X64");
  display.setCursor(20,25);
  display.println("Hello, Arducam!");
   display.setCursor(10,45);
  display.println("support@arducam.com");
  display.display();



}


void loop() {

}













