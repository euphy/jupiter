#include <SPI.h>
#include <TFT_eSPI.h> // Hardware-specific library

TFT_eSPI lcd = TFT_eSPI();       // Invoke custom library

void setup() {
  Serial.begin(57600);  // set up Serial library at 57600 bps
  Serial.println(F("\nROMBONE!"));

  lcd.init();
  lcd.setRotation(3);
  lcd.setTextDatum(TL_DATUM);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.fillScreen(TFT_BLACK);
  delay(1000);
  lcd.fillScreen(TFT_WHITE);
  delay(1000);

}
