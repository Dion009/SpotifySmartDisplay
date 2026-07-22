#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

void drawHeader() {
  // Header background
  tft.fillRoundRect(0, 0, 320, 30, 5, TFT_DARKGREY);

  // Time
  tft.setTextColor(TFT_WHITE, TFT_DARKGREY);
  tft.setTextDatum(TL_DATUM);
  tft.drawString("08:45 PM", 10, 8, 2);

  // WiFi
  tft.setTextDatum(TR_DATUM);
  tft.drawString("WiFi", 310, 8, 2);
}

void drawAlbumBox() {
  tft.drawRoundRect(15, 45, 90, 90, 8, TFT_WHITE);

  tft.setTextDatum(MC_DATUM);
  tft.drawString("Album", 60, 80, 2);
}

void drawSongInfo() {
  tft.setTextDatum(TL_DATUM);

  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.drawString("Song Title", 120, 50, 4);

  tft.setTextColor(TFT_LIGHTGREY, TFT_BLACK);
  tft.drawString("Artist Name", 120, 85, 2);
}

void drawProgressBar() {

  tft.drawRoundRect(20, 165, 280, 10, 5, TFT_WHITE);

  tft.fillRoundRect(22, 167, 120, 6, 3, TFT_GREEN);

  tft.setTextDatum(TL_DATUM);
  tft.setTextColor(TFT_WHITE);

  tft.drawString("1:23", 20, 180, 2);

  tft.setTextDatum(TR_DATUM);
  tft.drawString("3:45", 300, 180, 2);
}

void drawControls() {

  tft.setTextDatum(MC_DATUM);

  tft.drawString("<<", 70, 220, 4);
  tft.drawString(">", 160, 220, 4);
  tft.drawString(">>", 250, 220, 4);

  tft.setTextDatum(TL_DATUM);
  tft.drawString("Vol 75%", 110, 260, 2);
}

void setup() {

  tft.init();

  tft.setRotation(1);

  tft.fillScreen(TFT_BLACK);

  drawHeader();

  drawAlbumBox();

  drawSongInfo();

  drawProgressBar();

  drawControls();
}

void loop() {

}