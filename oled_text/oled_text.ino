
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
//
#define OLED_RESET 4 
//#define SCREEN_HEIGHT 32 

Adafruit_SSD1306 display(OLED_RESET);

void setup() {
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  
  //Display Text
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Abhishek UDAY");
  display.display(); 
}

void loop() {
  
}
