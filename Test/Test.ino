#define LGFX_USE_V1
#include <LovyanGFX.hpp>
#include "Matouch7.h"
#include "midleFont.h"
#include "smallFont.h"

#define SCREEN_HD

#ifdef SCREEN_HD
#define SCREEN_W 1024
#define SCREEN_H 600
#endif

unsigned short taskCls[4] = { 0x2DD3, 0x2D17, 0xA157, 0xB945 };
unsigned short blockColor[2] = { 0x2945, 0x8C71 };
unsigned short grays[13];

LGFX lcd;
LGFX_Sprite sprite(&lcd);

float fps = 0;
unsigned long st = 0;
unsigned long en = 0;

int32_t x, y;
int32_t xp, yp;
int32_t xs, ys;

int ballX = 30;
int ballY = 100;

int sW = 282;
int sY = 500;

int iX = 4;
int iY = 4;

String tasks[10] = { "TRASH", "DISHES", "VACUMING", "DUSTING", "FLORS", "GROCERIES", "BATHROOM", "LOUNDRY", "IRONING", "WINDOWS/MIRRORS" };
String days[8] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN", "OTH" };
bool taskFinished[10][7] = { 0 };
int scoreDays[8];
int segmentDays[8];
int mmax = 0;
int other[3] = { 0 };
bool press = 0;
int deb = 0;
int score = 0;
int scoreW = 0;
int scoreO = 0;
int brightnes[5] = { 40, 80, 100, 120, 140 };
int b = 1;

void setup() {
  lcd.init();
  lcd.setRotation(3);
  lcd.setBrightness(10);
  lcd.fillScreen(TFT_BLACK);

  sprite.createSprite(282,500);

  Serial.begin(115200);

  drow();
}

void loop() {
  if (lcd.getTouch(&x, &y)) {
    xp = map(x, 6, 600, 0, 600);
    yp = map(y, 5, 1020, 0, 1024);
    Serial.print("x ");
    Serial.println(xp);
    Serial.print("y ");
    Serial.println(yp);
  }
}

void drow() {
  sprite.loadFont(midleFont);
  sprite.setTextDatum(textdatum_t::middle_center);
  sprite.setTextColor(grays[0], TFT_BLACK);
  sprite.drawString("Household tasks", 110, 20);
  sprite.unloadFont();

  sprite.loadFont(smallFont);

  sprite.setTextColor(grays[4], TFT_RED);

  for (int i = 0; i < 7; i++) {
    sprite.drawString(days[i], 20 + (i * 40), 56);
    sprite.fillRect(6 + (i * 40), 70, 28, 4, grays[3]);
  }

  for (int i = 0; i < 9; i++) {
    sprite.drawLine(0, 80 + (i * 40) + (i * 6), 280, 80 + (i * 40) + (i * 6), grays[3]);
    sprite.drawLine(0, 120 + (i * 40) + (i * 6), 280, 120 + (i * 40) + (i * 6), grays[3]);

    for (int j = 0; j < 7; j++) {
      sprite.drawLine(j * 40, 80 + (i * 40) + (i * 6), j * 40, 120 + (i * 40) + (i * 6), grays[3]);
      sprite.drawLine(j * 40 + 40, 80 + (i * 40) + (i * 6), j * 40 + 40, 120 + (i * 40) + (i * 6), grays[3]);
      sprite.fillRect((j * 40) + 6, 80 + (i * 40) + 6 + (i * 6), 28, 28, blockColor[taskFinished[i][j]]);
    }
  }

  sprite.unloadFont();
  sprite.pushSprite(300,10);
}
