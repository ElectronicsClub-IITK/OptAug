#include <Wire.h>
#include <U8g2lib.h>

// Initialize the U8g2 library for I2C communication
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE); // No reset pin

void setup() {
  u8g2.begin(); // Initialize the display
}

void loop() {
  u8g2.clearBuffer(); // Clear the display buffer

  // Set font
  u8g2.setFont(u8g2_font_ncenB08_tr); // Choose a font

  // Print text on multiple lines
  u8g2.drawStr(2, 10, "Rishit"); // Line 1 at y = 10
  u8g2.drawStr(2, 20, "Welcome to");      // Line 2 at y = 20
  u8g2.drawStr(2, 30, "the OLED World!"); // Line 3 at y = 30

  u8g2.sendBuffer(); // Send the buffer to the display

  delay(2000); // Wait for 2 seconds
}
