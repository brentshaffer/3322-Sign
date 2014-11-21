#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>


#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

unsigned short sB = matrix.Color333(0, 2, 7);

//c goes from 0 to 31
//r goes from 0 to 15

void empty() {
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}
//3s
void c1_8(int c, int r) {
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+14, sB);
}
void c2_3_4_9_10_11(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+10, sB);
  matrix.drawPixel(c, r+15, sB);
}
void c5_12(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+9, sB);
  matrix.drawPixel(c, r+10, sB);
  matrix.drawPixel(c, r+11, sB);
  matrix.drawPixel(c, r+14, sB);
  matrix.drawPixel(c, r+15, sB);
}
void c6_13(int c, int r) {
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+7, sB);
  matrix.drawPixel(c, r+8, sB);
  matrix.drawPixel(c, r+9, sB);
  matrix.drawPixel(c, r+11, sB);
  matrix.drawPixel(c, r+12, sB);
  matrix.drawPixel(c, r+13, sB);
  matrix.drawPixel(c, r+14, sB);
}

//2s
void c15_22(int c, int r) {
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+7, sB);
  matrix.drawPixel(c, r+13, sB);
  matrix.drawPixel(c, r+14, sB);
  matrix.drawPixel(c, r+15, sB);
}
void c16_23(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+12, sB);
  matrix.drawPixel(c, r+13, sB);
  matrix.drawPixel(c, r+15, sB);
}
void c17_24(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+11, sB);
  matrix.drawPixel(c, r+12, sB);
  matrix.drawPixel(c, r+15, sB);
}
void c18_25(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+10, sB);
  matrix.drawPixel(c, r+11, sB);
  matrix.drawPixel(c, r+15, sB);
}
void c19_26(int c, int r) {
  matrix.drawPixel(c, r+5, sB);
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+9, sB);
  matrix.drawPixel(c, r+10, sB);
  matrix.drawPixel(c, r+15, sB);
}
void c20_27(int c, int r) {
  matrix.drawPixel(c, r+6, sB);
  matrix.drawPixel(c, r+7, sB);
  matrix.drawPixel(c, r+8, sB);
  matrix.drawPixel(c, r+9, sB);
  matrix.drawPixel(c, r+15, sB);
}

void setup() {
  
  }
void loop() {
  int td = 40;
  matrix.begin();
  delay(1000);
  for(int x = 31; x >= -28; x--) {
    empty();
    c1_8(x, 0);
    c2_3_4_9_10_11(x + 1, 0);
    c2_3_4_9_10_11(x + 2, 0);
    c2_3_4_9_10_11(x + 3, 0);
    c5_12(x + 4, 0);
    c6_13(x + 5, 0);
    c1_8(x + 7, 0);
    c2_3_4_9_10_11(x + 8, 0);
    c2_3_4_9_10_11(x + 9, 0);
    c2_3_4_9_10_11(x + 10, 0);
    c5_12(x + 11, 0);
    c6_13(x + 12, 0);
    //33 /\
    //22 \/
    c15_22(x + 14, 0);
    c16_23(x + 15, 0);
    c17_24(x + 16, 0);
    c18_25(x + 17, 0);
    c19_26(x + 18, 0);
    c20_27(x + 19, 0);
    c15_22(x + 21, 0);
    c16_23(x + 22, 0);
    c17_24(x + 23, 0);
    c18_25(x + 24, 0);
    c19_26(x + 25, 0);
    c20_27(x + 26, 0);
    delay(td);
  }
}
