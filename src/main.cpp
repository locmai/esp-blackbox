#include <SPI.h>

#include <TFT_eSPI.h>       // Hardware-specific library

TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

void setup(void) {
    tft.init();

    tft.fillScreen(TFT_BLACK);

    // Set "cursor" at top left corner of display (0,0) and select font 4
    tft.setCursor(0, 0, 4);

    // Set the font colour to be white with a black background
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
}

void loop() {
    tft.fillScreen(TFT_BLACK);
    tft.setCursor(0, 0, 4);
    tft.println("Hello, world!\n");
    delay(5000);
}
