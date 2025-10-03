#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <SPI.h>

#define TFT_CS   24
#define TFT_DC   28
#define TFT_RST  26

Adafruit_ILI9341 tft(TFT_CS, TFT_DC, TFT_RST); // HW SPI: SCK=52, MISO=50, MOSI=51

void setup() {
  Serial.begin(9600);
  Serial.println(F("MegaTFT (DE) - ILI9341 (Hardware SPI)"));
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  tft.setRotation(1);
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(2);
  tft.setCursor(10, 10);
  tft.println(F("ILI9341 - HW SPI"));
}
void loop() {}
