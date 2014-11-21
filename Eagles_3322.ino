#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>

#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

void eagle() {
  matrix.drawPixel(0, 2, matrix.Color333(0, 0, 1));
  matrix.drawPixel(0, 4, matrix.Color333(0, 2, 7));
  matrix.drawPixel(0, 6, matrix.Color333(0, 0, 7));
  matrix.drawPixel(0, 9, matrix.Color333(0, 0, 1));
  
  matrix.drawPixel(1, 1, matrix.Color333(0, 0, 7));
  matrix.drawPixel(1, 3, matrix.Color333(0, 0, 1));
  matrix.drawPixel(1, 4, matrix.Color333(0, 2, 7));
  matrix.drawPixel(1, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(1, 6, matrix.Color333(0, 0, 7));
  matrix.drawPixel(1, 7, matrix.Color333(0, 0, 7));
  matrix.drawPixel(1, 8, matrix.Color333(0, 0, 1));
  matrix.drawPixel(1, 9, matrix.Color333(0, 0, 1));
  
  matrix.drawPixel(2, 2, matrix.Color333(0, 0, 7));
  matrix.drawPixel(2, 3, matrix.Color333(0, 0, 1));
  matrix.drawPixel(2, 4, matrix.Color333(0, 0, 1));
  matrix.drawPixel(2, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(2, 7, matrix.Color333(0, 0, 7));
  matrix.drawPixel(2, 8, matrix.Color333(0, 0, 1));
  
  matrix.drawPixel(3, 1, matrix.Color333(0, 2, 7));
  matrix.drawPixel(3, 2, matrix.Color333(0, 2, 7));
  matrix.drawPixel(3, 3, matrix.Color333(0, 0, 7));
  matrix.drawPixel(3, 4, matrix.Color333(0, 0, 1));
  matrix.drawPixel(3, 5, matrix.Color333(0, 0, 1));
  matrix.drawPixel(3, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(3, 7, matrix.Color333(0, 0, 7));
  matrix.drawPixel(3, 8, matrix.Color333(0, 0, 1));
  matrix.drawPixel(3, 9, matrix.Color333(0, 0, 7));
  matrix.drawPixel(3, 10, matrix.Color333(0, 2, 7));
  matrix.drawPixel(3, 15, matrix.Color333(7, 7, 0));
  
  matrix.drawPixel(4, 0, matrix.Color333(0, 2, 7));
  matrix.drawPixel(4, 5, matrix.Color333(7, 7, 0));
  matrix.drawPixel(4, 6, matrix.Color333(0, 0, 1));
  matrix.drawPixel(4, 7, matrix.Color333(0, 0, 7));
  matrix.drawPixel(4, 8, matrix.Color333(0, 0, 1));
  matrix.drawPixel(4, 9, matrix.Color333(0, 0, 7));
  matrix.drawPixel(4, 13, matrix.Color333(7, 2, 0));
  matrix.drawPixel(4, 14, matrix.Color333(7, 7, 0));
  
  matrix.drawPixel(5, 4, matrix.Color333(7, 7, 0));
  matrix.drawPixel(5, 5, matrix.Color333(7, 7, 0));
  matrix.drawPixel(5, 7, matrix.Color333(0, 0, 1));
  matrix.drawPixel(5, 8, matrix.Color333(0, 0, 1));
  matrix.drawPixel(5, 9, matrix.Color333(0, 0, 7));
  matrix.drawPixel(5, 12, matrix.Color333(7, 2, 0));
  matrix.drawPixel(5, 13, matrix.Color333(7, 2, 0));
  matrix.drawPixel(5, 14, matrix.Color333(7, 7, 0));
  matrix.drawPixel(5, 15, matrix.Color333(7, 7, 0));
  
  matrix.drawPixel(6, 3, matrix.Color333(7, 7, 7));
  matrix.drawPixel(6, 4, matrix.Color333(7, 7, 7));
  matrix.drawPixel(6, 5, matrix.Color333(7, 7, 0));
  matrix.drawPixel(6, 7, matrix.Color333(7, 2, 0));
  matrix.drawPixel(6, 8, matrix.Color333(7, 2, 0));
  matrix.drawPixel(6, 9, matrix.Color333(0, 0, 1));
  matrix.drawPixel(6, 11, matrix.Color333(7, 2, 0));
  matrix.drawPixel(6, 12, matrix.Color333(7, 2, 0));
  
  matrix.drawPixel(7, 3, matrix.Color333(7, 7, 7));
  matrix.drawPixel(7, 4, matrix.Color333(0, 2, 7));
  matrix.drawPixel(7, 5, matrix.Color333(7, 7, 7));
  matrix.drawPixel(7, 6, matrix.Color333(7, 2, 0));
  matrix.drawPixel(7, 7, matrix.Color333(7, 2, 0));
  matrix.drawPixel(7, 8, matrix.Color333(7, 2, 0));
  matrix.drawPixel(7, 9, matrix.Color333(7, 2, 0));
  matrix.drawPixel(7, 10, matrix.Color333(7, 2, 0));
  matrix.drawPixel(7, 11, matrix.Color333(7, 2, 0));
  
  matrix.drawPixel(8, 3, matrix.Color333(7, 7, 7));
  matrix.drawPixel(8, 4, matrix.Color333(7, 7, 7));
  matrix.drawPixel(8, 5, matrix.Color333(7, 7, 7));
  matrix.drawPixel(8, 6, matrix.Color333(7, 2, 0));
  matrix.drawPixel(8, 7, matrix.Color333(7, 2, 0));
  matrix.drawPixel(8, 8, matrix.Color333(7, 2, 0));
  matrix.drawPixel(8, 9, matrix.Color333(7, 2, 0));
  matrix.drawPixel(8, 10, matrix.Color333(7, 2, 0));
  matrix.drawPixel(8, 11, matrix.Color333(7, 2, 0));
  
  matrix.drawPixel(9, 4, matrix.Color333(7, 7, 7));
  matrix.drawPixel(9, 5, matrix.Color333(7, 7, 7));
  matrix.drawPixel(9, 6, matrix.Color333(7, 2, 0));
  matrix.drawPixel(9, 7, matrix.Color333(7, 2, 0));
  matrix.drawPixel(9, 8, matrix.Color333(7, 2, 0));
  matrix.drawPixel(9, 9, matrix.Color333(0, 0, 1));
  matrix.drawPixel(9, 11, matrix.Color333(7, 2, 0));
  matrix.drawPixel(9, 12, matrix.Color333(7, 2, 0));
  
  matrix.drawPixel(10, 7, matrix.Color333(0, 0, 1));
  matrix.drawPixel(10, 8, matrix.Color333(0, 0, 1));
  matrix.drawPixel(10, 9, matrix.Color333(0, 0, 7));
  matrix.drawPixel(10, 12, matrix.Color333(7, 2, 0));
  matrix.drawPixel(10, 13, matrix.Color333(7, 2, 0));
  matrix.drawPixel(10, 14, matrix.Color333(7, 7, 0));
  matrix.drawPixel(10, 15, matrix.Color333(7, 7, 0));
  
  matrix.drawPixel(11, 0, matrix.Color333(0, 2, 7));
  matrix.drawPixel(11, 6, matrix.Color333(0, 0, 1));
  matrix.drawPixel(11, 7, matrix.Color333(0, 0, 7));
  matrix.drawPixel(11, 8, matrix.Color333(0, 0, 1));
  matrix.drawPixel(11, 9, matrix.Color333(0, 0, 7));
  matrix.drawPixel(11, 13, matrix.Color333(7, 2, 0));
  matrix.drawPixel(11, 14, matrix.Color333(7, 7, 0));
  
  matrix.drawPixel(12, 1, matrix.Color333(0, 2, 7));
  matrix.drawPixel(12, 2, matrix.Color333(0, 2, 7));
  matrix.drawPixel(12, 3, matrix.Color333(0, 0, 7));
  matrix.drawPixel(12, 4, matrix.Color333(0, 0, 1));
  matrix.drawPixel(12, 5, matrix.Color333(0, 0, 1));
  matrix.drawPixel(12, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(12, 7, matrix.Color333(0, 0, 7));
  matrix.drawPixel(12, 8, matrix.Color333(0, 0, 1));
  matrix.drawPixel(12, 9, matrix.Color333(0, 0, 7));
  matrix.drawPixel(12, 10, matrix.Color333(0, 2, 7));
  matrix.drawPixel(12, 15, matrix.Color333(7, 7, 0));
  
  matrix.drawPixel(13, 2, matrix.Color333(0, 0, 7));
  matrix.drawPixel(13, 3, matrix.Color333(0, 0, 1));
  matrix.drawPixel(13, 4, matrix.Color333(0, 0, 1));
  matrix.drawPixel(13, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(13, 7, matrix.Color333(0, 0, 7));
  matrix.drawPixel(13, 8, matrix.Color333(0, 0, 1));
  
  matrix.drawPixel(14, 1, matrix.Color333(0, 0, 7));
  matrix.drawPixel(14, 3, matrix.Color333(0, 0, 1));
  matrix.drawPixel(14, 4, matrix.Color333(0, 2, 7));
  matrix.drawPixel(14, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(14, 6, matrix.Color333(0, 0, 7));
  matrix.drawPixel(14, 7, matrix.Color333(0, 0, 7));
  matrix.drawPixel(14, 8, matrix.Color333(0, 0, 1));
  matrix.drawPixel(14, 9, matrix.Color333(0, 0, 1));
  
  matrix.drawPixel(15, 2, matrix.Color333(0, 0, 1));
  matrix.drawPixel(15, 4, matrix.Color333(0, 2, 7));
  matrix.drawPixel(15, 6, matrix.Color333(0, 0, 7));
  matrix.drawPixel(15, 9, matrix.Color333(0, 0, 1));
}
void e3322() {
  matrix.drawPixel(19, 1, matrix.Color333(0, 2, 7));
  matrix.drawPixel(19, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(19, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(19, 13, matrix.Color333(0, 2, 7));
  matrix.drawPixel(19, 14, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(20, 0, matrix.Color333(0, 2, 7));
  matrix.drawPixel(20, 3, matrix.Color333(0, 2, 7));
  matrix.drawPixel(20, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(20, 8, matrix.Color333(0, 2, 7));
  matrix.drawPixel(20, 12, matrix.Color333(0, 2, 7));
  matrix.drawPixel(20, 14, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(21, 0, matrix.Color333(0, 2, 7));
  matrix.drawPixel(21, 3, matrix.Color333(0, 2, 7));
  matrix.drawPixel(21, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(21, 8, matrix.Color333(0, 2, 7));
  matrix.drawPixel(21, 11, matrix.Color333(0, 2, 7));
  matrix.drawPixel(21, 14, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(22, 1, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 2, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 4, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 10, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 14, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(25, 1, matrix.Color333(0, 2, 7));
  matrix.drawPixel(25, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(25, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(25, 13, matrix.Color333(0, 2, 7));
  matrix.drawPixel(25, 14, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(26, 0, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 3, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 8, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 12, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 14, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(27, 0, matrix.Color333(0, 2, 7));
  matrix.drawPixel(27, 3, matrix.Color333(0, 2, 7));
  matrix.drawPixel(27, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(27, 8, matrix.Color333(0, 2, 7));
  matrix.drawPixel(27, 11, matrix.Color333(0, 2, 7));
  matrix.drawPixel(27, 14, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(28, 1, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 2, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 4, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 10, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 14, matrix.Color333(0, 2, 7));
}

void setup() {
  matrix.begin();
  eagle();
  e3322();
}
void loop() {
  
}
