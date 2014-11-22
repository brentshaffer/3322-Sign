#include <Adafruit_GFX.h>
#include <RGBmatrixPanel.h>

#define CLK 8
#define LAT A3
#define OE 9
#define A A0
#define B A1
#define C A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

unsigned short rB = matrix.Color333(0, 0, 7);
unsigned short dB = matrix.Color333(0, 0, 1);
unsigned short sB = matrix.Color333(0, 2, 7);
unsigned short y = matrix.Color333(7, 7, 0);
unsigned short rC = matrix.Color333(7, 2, 0);
unsigned short w = matrix.Color333(7, 7, 7);


int c0_15[4] = {2, 4, 6, 9};
unsigned short cc0_15[4] = {dB, sB, rB, dB};

int c1_14[8] = {1, 3, 4, 5, 6, 7, 8, 9};
unsigned short cc1_14[8] = {rB, dB, sB, sB, rB, rB, dB, dB};

int c2_13[6] = {2, 3, 4, 5, 7, 8};
unsigned short cc2_13[6] = {rB, dB, dB, sB, rB, dB};

int c3_12[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15};
unsigned short cc3_12[11] = {sB, sB, rB, dB, dB, sB, rB, dB, rB, sB, y};

int c4[8] = {0, 5, 6, 7, 8, 9, 13, 14};
unsigned short cc4[8] = {sB, y, dB, rB, dB, rB, rC, y};

int c5[9] = {4, 5, 7, 8, 9, 12, 13, 14, 15};
unsigned short cc5[9] = {y, y, dB, dB, rB, rC, rC, y, y};

int c6[8] = {3, 4, 5, 7, 8, 9, 11, 12};
unsigned short cc6[8] = {w, w, y, rC, rC, dB, rC, rC};

int c7[9] = {3, 4, 5, 6, 7, 8, 9, 10, 11};
unsigned short cc7[9] = {w, sB, w, rC, rC, rC, rC, rC, rC};

int c8[9] = {3, 4, 5, 6, 7, 8, 9, 10, 11};
unsigned short cc8[9] = {w, w, w, rC, rC, rC, rC, rC, rC};

int c9[8] = {4, 5, 6, 7, 8, 9, 11, 12};
unsigned short cc9[8] = {w, w, rC, rC, rC, dB, rC, rC};

int c10[7] = {7, 8, 9, 12, 13, 14, 15};
unsigned short cc10[7] = {dB, dB, rB, rC, rC, y, y};

int c11[7] = {0, 6, 7, 8, 9, 13, 14};
unsigned short cc11[7] = {sB, dB, rB, dB, rB, rC, y};


void drawCol(int c, int r, int column[], int length, unsigned short color[]) {
  for(int i=0; i<length; i++) {
    matrix.drawPixel(c, r + column[i], color[i]);
  }
}


void setup() {
  matrix.begin();
}
void loop() {
  drawCol(0, 0, c0_15, 4, cc0_15);
  drawCol(1, 0, c1_14, 8, cc1_14);
  drawCol(2, 0, c2_13, 6, cc2_13);
  drawCol(3, 0, c3_12, 11, cc3_12);
  drawCol(4, 0, c4, 8, cc4);
  drawCol(5, 0, c5, 9, cc5);
  drawCol(6, 0, c6, 8, cc6);
  drawCol(7, 0, c7, 9, cc7);
  drawCol(8, 0, c8, 9, cc8);
  drawCol(9, 0, c9, 8, cc9);
  drawCol(10, 0, c10, 7, cc10);
  drawCol(11, 0, c11, 7, cc11);
  drawCol(12, 0, c3_12, 11, cc3_12);
  drawCol(13, 0, c2_13, 6, cc2_13);
  drawCol(14, 0, c1_14, 8, cc1_14);
  drawCol(15, 0, c0_15, 4, cc0_15);
}
