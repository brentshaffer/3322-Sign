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
  /*
  matrix.drawPixel(1, 0, matrix.Color333(0, 0, 7)); //Regular Blue DONE
  matrix.drawPixel(0, 2, matrix.Color333(0, 0, 1)); //Dark Blue DONE
  matrix.drawPixel(0, 4, matrix.Color333(0, 2, 7)); //Columbia Blue DONE
  matrix.drawPixel(4, 5, matrix.Color333(7, 7, 0)); //Yellow DONE
  matrix.drawPixel(6, 7, matrix.Color333(7, 2, 0)); //Dark Red DONE
  matrix.drawPixel(6, 3, matrix.Color333(7, 7, 7)); //White
  */
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
  matrix.drawPixel(11, 10, matrix.Color333(0, 2, 7));
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
  matrix.drawPixel(13, 10, matrix.Color333(0, 0, 7));
  
  matrix.drawPixel(14, 1, matrix.Color333(0, 0, 7));
  matrix.drawPixel(14, 3, matrix.Color333(0, 0, 1));
  matrix.drawPixel(14, 4, matrix.Color333(0, 2, 7));
  matrix.drawPixel(14, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(14, 6, matrix.Color333(0, 0, 7));
  matrix.drawPixel(14, 7, matrix.Color333(0, 0, 7));
  matrix.drawPixel(14, 8, matrix.Color333(0, 0, 1));
  matrix.drawPixel(14, 9, matrix.Color333(0, 0, 1));
  matrix.drawPixel(14, 10, matrix.Color333(0, 0, 7));
  matrix.drawPixel(14, 11, matrix.Color333(0, 0, 7));
  
  matrix.drawPixel(15, 2, matrix.Color333(0, 0, 1));
  matrix.drawPixel(15, 4, matrix.Color333(0, 2, 7));
  matrix.drawPixel(15, 6, matrix.Color333(0, 0, 7));
  matrix.drawPixel(15, 9, matrix.Color333(0, 0, 1));
  matrix.drawPixel(15, 11, matrix.Color333(0, 0, 7));
  
  matrix.drawPixel(18, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(18, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(18, 7, matrix.Color333(0, 2, 7));
  matrix.drawPixel(18, 8, matrix.Color333(0, 2, 7));
  matrix.drawPixel(18, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(18, 11, matrix.Color333(0, 2, 7));
  matrix.drawPixel(18, 12, matrix.Color333(0, 2, 7));
  matrix.drawPixel(18, 13, matrix.Color333(0, 2, 7));
  matrix.drawPixel(18, 14, matrix.Color333(0, 2, 7));
  matrix.drawPixel(18, 15, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(19, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(19, 7, matrix.Color333(0, 2, 7));
  matrix.drawPixel(19, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(19, 15, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(20, 1, matrix.Color333(0, 2, 7));
  matrix.drawPixel(20, 2, matrix.Color333(0, 2, 7));
  matrix.drawPixel(20, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(20, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(20, 15, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(21, 0, matrix.Color333(0, 2, 7));
  matrix.drawPixel(21, 3, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(22, 0, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 2, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 3, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 7, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 8, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 11, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 12, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 13, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 14, matrix.Color333(0, 2, 7));
  matrix.drawPixel(22, 15, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(23, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(23, 7, matrix.Color333(0, 2, 7));
  matrix.drawPixel(23, 11, matrix.Color333(0, 2, 7));
  matrix.drawPixel(23, 13, matrix.Color333(0, 2, 7));
  matrix.drawPixel(23, 15, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(24, 1, matrix.Color333(0, 2, 7));
  matrix.drawPixel(24, 2, matrix.Color333(0, 2, 7));
  matrix.drawPixel(24, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(24, 7, matrix.Color333(0, 2, 7));
  matrix.drawPixel(24, 8, matrix.Color333(0, 2, 7));
  matrix.drawPixel(24, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(24, 11, matrix.Color333(0, 2, 7));
  matrix.drawPixel(24, 15, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(25, 0, matrix.Color333(0, 2, 7));
  matrix.drawPixel(25, 3, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(26, 1, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 2, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 6, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 7, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 8, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 12, matrix.Color333(0, 2, 7));
  matrix.drawPixel(26, 15, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(27, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(27, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(27, 11, matrix.Color333(0, 2, 7));
  matrix.drawPixel(27, 13, matrix.Color333(0, 2, 7));
  matrix.drawPixel(27, 15, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(28, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 7, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 9, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 11, matrix.Color333(0, 2, 7));
  matrix.drawPixel(28, 14, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(29, 5, matrix.Color333(0, 2, 7));
  matrix.drawPixel(29, 7, matrix.Color333(0, 2, 7));
  matrix.drawPixel(29, 8, matrix.Color333(0, 2, 7));
  matrix.drawPixel(29, 9, matrix.Color333(0, 2, 7));
  
  matrix.drawPixel(30, 11, matrix.Color333(0, 2, 7));
  matrix.drawPixel(30, 12, matrix.Color333(0, 2, 7));
  matrix.drawPixel(30, 13, matrix.Color333(0, 2, 7));
  matrix.drawPixel(30, 15, matrix.Color333(0, 2, 7));
}

void setup() {
  matrix.begin();
  eagle();
}
void loop() {
  
}
