//Serial:    0 (RX) and  1 (TX)
//Serial 1: 19 (RX) and 18 (TX)
//Serial 2: 17 (RX) and 16 (TX)
//Serial 3: 15 (RX) and 14 (TX)

#include <UTFT.h>
#include <Wire.h>
#include <RTClib.h> //============DS1307
#include <UTouch.h>
//#include <SdFat.h>
#include <SPI.h>
#include <SD.h>
//                                                                                        #include <SoftwareSerial.h>
//#include "pitches.h"//use for melody

//--------------------------------//use for sd card
File root;
// SD chip select pin
//const uint8_t chipSelect = SS;
// file system object
//SdFat sd;
//SdFile file;
// define a serial output stream
//ArduinoOutStream cout(Serial);
//-------------------------------end sd card
char buffer[10]; //======================DS1307
RTC_DS1307 rtc; //=======================DS1307
int buttonPin = 18;         // the number of the pushbutton pin
int ledPin = 8;       // choose the pin for the LEDDisplay
int vibratorPin = 9;
int zumerPin = 19;     // choose the pin for the zumer
int reading;           // the current reading from the input pin
int previous = LOW;    // the previous reading from the input pin

int ledState = LOW;         // the current state of the output pin
int buttonState;             // the current reading from the input pin
int lastButtonState = LOW;   // the previous reading from the input pin

long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 50;    // the debounce time; increase if the output flickers
//----------------------------------------------------------------

// Declare which fonts we will be using
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];
extern uint8_t SevenSeg_XXXL_Num[];
extern uint8_t Dingbats1_XL[];
extern uint8_t GroteskBold32x64[];

UTFT myGLCD(ITDB50,38,39,40,41);
//                                                                                                SoftwareSerial mySerial(9, 10);  //TX = D7, RX = D8 for GSM modul
UTouch  myTouch( 6, 5, 4, 3, 2); //for paint

int tp_x;
int tp_y;
int j = 0;
byte a = 0;
byte clockMenuS = 0;
byte menuNumber = 0;
int mainMenuNumber = 0;
byte hour = 0;
byte minute = 0;
byte second = 0;
byte nowSeconds = 0;
byte lockScreenS = 20;
byte lockScreenM = 100;
byte day = 1;
byte month = 1;
int year = 2015;
byte dayOfWeek;
byte charSMS = 0;
byte toUpOrSmall = 0;
byte countCharTelNumber = 0;
int clockX = 0;
int clockY = 0;
int wifiX = 0;
int wifiY = 0;
byte alarmHour = 0;
byte alarmMinutes = 0;
byte AlarmOnOff = 0;
byte autoLock = 4;
int ringingSound = 0;
byte displayRinging = 1;
String telNumber = "";
String tempSymbol = "";
String smsString = "";
int xString = 20;
int yString = 120;
bool wifiOnOff = 0;
//String tempSmsString = "";
byte ledPinFading = 150;
int displayCursor = 220;
int setYear = year;
byte setMonth = month;
byte setDay = day;
byte setHour = hour;
byte setMinutes = minute;
byte choiceClock = 0;
byte minutesNow = 0;
int gameCount = 0;
long gameSpeed = 0;
float calculatorFirstNumber = 0;
float calculatorFirstNumberf = 0.0;
float calculatorSecondNumber = 0;
float calculatorResult = 0;
byte calculatorOperation = 0;
byte calculatorDigits = 0;
byte vibratorOnOff = 0;
byte beepSound = 0;
int batteryLevel = 99;
double radioFrequency = 87.9;
byte radioOnOff = 0;
//String fileName[] = {};
int indexFileName = 0;
//=============================tetris variable
byte firstFigure = 0;
int xs = 180;
int ys = 50;
int xStartPlay = 10;
int yStartPlay = 10;
byte typeFigure = 0;
int startX = 0;
int startY = 0;
int posY = 10;
String menuButtonsArray[12]={"GSM","SMS","OFI","MP3","CAL","GPS","SET","GAM","WEB","FM","IRR","File"};
String calculatorArray[16]={"1","2","3","/","4","5","6","*","7","8","9","-","0",".","=","+"};
String gsmButtonsArray[12]={"1","2","3","4","5","6","7","8","9","*","0","#"};
String gamesButtonsArray[12]={"Snake","Tetris","Cars","Brick Breaker","Puzzle","IQ","","","","","",""};
String setingsButtonsArray[12]={"Alarm","Display","Date and Time","Profile","Wi-FI","Ringtones","","","","","",""};
String smsSmallSymbols[36]={"1","2","3","4","5","6","7","8","9","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m","q","0"};
String smsBigSymbols[36]={"!","@","#","$","%","^","&","*","(","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Z","X","C","V","B","N","M","Q",")"};
String smsStringArray[128]={"","","","","","","","","","","","","","","","","","","","",
                            "","","","","","","","","","","","","","","","","","","","",
                            "","","","","","","","","","","","","","","","","","","","",
                            "","","","","","","","","","","","","","","","","","","","",
                            "","","","","","","","","","","","","","","","","","","","",
                            "","","","","","","","","","","","","","","","","","","","",
                            "","","","","","","",""};
String radioButtonsArray[2]={"Search radio","reset"};
String IRButtonsArray[12] = {"","","","","","","","","","","","Set"};
String officeStringArray[6]={"New text file", "New spreadsheet", "New paint", "Open text file", "Open spreadsheet", "Open paint"};
/*String smsStringArray[8][20]={{"","","","","","","","","","","","","","","","","","","",""},
                              {"","","","","","","","","","","","","","","","","","","",""},
                              {"","","","","","","","","","","","","","","","","","","",""},
                              {"","","","","","","","","","","","","","","","","","","",""},
                              {"","","","","","","","","","","","","","","","","","","",""},
                              {"","","","","","","","","","","","","","","","","","","",""},
                              {"","","","","","","","","","","","","","","","","","","",""},
                              {"","","","","","","","","","","","","","","","","","","",""}};*/
String smsButtonsArray[12]={"Open message","New messages","","","","","","","","","",""};
bool playSongMP3 = false;
int xPlayMP3Buttons = 20;
int yPlayMP3Buttons = 600;
String buttonsMP3Array[5]={"Prev", "Pause", "Stop", "Play", "Next"};
byte previousSong[] = {0x7E, 0xFF, 0x06, 0x02, 0x00, 0x00, 0x00, 0xEF };
byte resumeSong[] = {0x7E, 0xFF, 0x06, 0x0D, 0x00, 0x00, 0x00, 0xEF };
byte pauseSong[] = {0x7E, 0xFF, 0x06, 0x0E, 0x00, 0x00, 0x00, 0xEF };
byte stopSong[] = {0x7E, 0xFF, 0x06, 0x16, 0x00, 0x00, 0x00, 0xEF };
byte nextSong[] = {0x7E, 0xFF, 0x06, 0x01, 0x00, 0x00, 0x00, 0xEF };
byte volumeUP[] = {0x7E, 0xFF, 0x06, 0x04, 0x00, 0x00, 0x00, 0xEF };
byte volumeDOWN[] = {0x7E, 0xFF, 0x06, 0x05, 0x00, 0x00, 0x00, 0xEF };
byte sleepMode[] = {0x7E, 0xFF, 0x06, 0x0A, 0x00, 0x00, 0x00, 0xEF };
byte wakeUP[] = {0x7E, 0xFF, 0x06, 0x0B, 0x00, 0x00, 0x00, 0xEF };
byte playSongFromDir[] = {0x7E, 0xFF, 0x0F, 0x0B, 0x00, 0x01, 0x02, 0xEF };//Play the song with the directory:/01/002xxx.mp3
byte playCycleSong[] = {0x7E, 0xFF, 0x06, 0x19, 0x00, 0x00, 0x00, 0xEF };
byte StopCycleSong[] = {0x7E, 0xFF, 0x06, 0x19, 0x00, 0x00, 0x01, 0xEF };
   
byte randomColorRed = 0;
byte randomColorGreen = 0;
byte randomColorBlue = 0;
byte numberPuzel[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
byte tempNumber;
/*byte rGameField[20][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
                           
byte gGameField[20][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
                           
byte bGameField[20][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

byte Z1 [4][4] = { \
    {3, 0, 0, 0}, \
    {1, 1, 0, 0}, \
    {0, 1, 1, 0}, \
    {0, 0, 0, 0} \
};
byte Z2 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 1, 0, 0}, \
    {1, 1, 0, 0}, \
    {1, 0, 0, 0} \
};
byte S1 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 1, 1, 0}, \
    {1, 1, 0, 0}, \
    {0, 0, 0, 0} \
};
byte S2 [4][4] = { \
    {3, 0, 0, 0}, \
    {1, 0, 0, 0}, \
    {1, 1, 0, 0}, \
    {0, 1, 0, 0} \
};
byte J1 [4][4] = { \
    {3, 0, 0, 0}, \
    {1, 1, 1, 0}, \
    {0, 0, 1, 0}, \
    {0, 0, 0, 0} \
};
byte J2 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 1, 0, 0}, \
    {0, 1, 0, 0}, \
    {1, 1, 0, 0} \
};
byte J3 [4][4] = { \
    {3, 0, 0, 0}, \
    {1, 0, 0, 0}, \
    {1, 1, 1, 0}, \
    {0, 0, 0, 0} \
};
byte J4 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 1, 1, 0}, \
    {0, 1, 0, 0}, \
    {0, 1, 0, 0} \
};
byte L1 [4][4] = { \
    {3, 0, 0, 0}, \
    {1, 1, 1, 0}, \
    {1, 0, 0, 0}, \
    {0, 0, 0, 0} \
};
byte L2 [4][4] = { \
    {3, 0, 0, 0}, \
    {1, 1, 0, 0}, \
    {0, 1, 0, 0}, \
    {0, 1, 0, 0} \
};
byte L3 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 0, 1, 0}, \
    {1, 1, 1, 0}, \
    {0, 0, 0, 0} \
};
byte L4 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 1, 0, 0}, \
    {0, 1, 0, 0}, \
    {0, 1, 1, 0} \
};
byte T1 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 1, 1, 1}, \
    {0, 0, 1, 0}, \
    {0, 0, 0, 0} \
};
byte T2 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 0, 1, 0}, \
    {0, 1, 1, 0}, \
    {0, 0, 1, 0} \
};
byte T3 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 0, 1, 0}, \
    {0, 1, 1, 0}, \
    {0, 0, 0, 0} \
};
byte T4 [4][4] = { \
    {3, 0, 0, 0}, \
    {0, 0, 1, 0}, \
    {0, 0, 1, 1}, \
    {0, 0, 1, 0} \
};
byte I1 [4][4] = { \
    {3, 0, 0, 0}, \
    {1, 1, 1, 1}, \
    {0, 0, 0, 0}, \
    {0, 0, 0, 0} \
};
byte I2 [4][4] = { \
    {3, 1, 0, 0}, \
    {0, 1, 0, 0}, \
    {0, 1, 0, 0}, \
    {0, 1, 0, 0} \
};
byte O1 [4][4] = {  \
    {3, 0, 0, 0}, \
    {0, 1, 1, 0}, \
    {0, 1, 1, 0}, \
    {0, 0, 0, 0} \
};*/
//============================end tetris variable
void setup()
{
  Serial.begin(19200);                //touchPanel
  Serial3.begin(9600);
  //====================== use for SD card
  pinMode(10, OUTPUT);

  if (!SD.begin(10)) {
  }
  root = SD.open("/");
  //===================== end use for SD card
  pinMode(buttonPin, INPUT);  // initialize the pushbutton pin as an input:
  pinMode(ledPin, OUTPUT);  // declare LED as output
  pinMode(vibratorPin, OUTPUT);
  digitalWrite(vibratorPin, LOW);
  pinMode(zumerPin, OUTPUT);  // declare LED as output
  digitalWrite(zumerPin, LOW);
  
  digitalWrite(ledPin, ledState); // set initial LED state
  //--------------------------------------------
  //                                                                                                   mySerial.begin(19200);
  
  Wire.begin();//============ DS1307
  rtc.begin();//============= DS1307
  //rtc.adjust(DateTime(setYear,setMonth,setDay,setHour,setMinutes));
  for(int p = 22; p < 42; p++)
  {
    pinMode(p,OUTPUT);
  }
  for(int p = 2; p < 7; p++)
  //--------------------------------------------
  myGLCD.InitLCD();
  myGLCD.clrScr();
  
  myTouch.InitTouch(); // for paint
  myTouch.setPrecision(PREC_HI);//PREC_MEDIUM
  
  analogWrite(ledPin, ledPinFading);
  myGLCD.setFont(GroteskBold32x64);
  myGLCD.setColor(255, 255, 255);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.print("P I D L E R", CENTER, 300);
  Serial3.write(sleepMode, sizeof(sleepMode));
  delay(5000);
  ledState = HIGH;
  myGLCD.clrScr();
}

void loop(){
 // read from port 0, send to port 1:
  /*if (Serial.available()) 
  {
    int inByte = Serial.read();
    Serial1.write(inByte);
  }*/ 
  DateTime now = rtc.now(); //==============DS1307
  hour = now.hour();
  minute = now.minute();
  second = now.second();
  day = now.day();
  month = now.month();
  year = now.year();
  dayOfWeek = now.dayOfWeek();
  int reading = digitalRead(buttonPin); // read the state of the switch into a local variable
  //----------------------------------------------------------------------------------- clock rotate
  if(now.second() == 1 && (clockMenuS == 0) && (minutesNow != minute)){
    clockScreen();
    minutesNow = minute;
    j = 0;
  }
  //----------------------------------------------------------------------------------- show button for unlock
  if(reading != lastButtonState){
  // reset the debouncing timer
    lastDebounceTime = millis();
    }
    if((millis() - lastDebounceTime) > debounceDelay){
    // whatever the reading is at, it's been there for longer
    // than the debounce delay, so take it as the actual current state:

    // if the button state has changed:
    if(reading != buttonState){
      buttonState = reading;

      // only toggle the LED if the new button state is HIGH
      if (buttonState == LOW) {
        ledState = !ledState;
      }
    }
  }
  if((ledState == HIGH) && (a == 0)){
  myGLCD.clrScr();
    if(playSongMP3){
      buttonsMP3Player();
    }
    colorTextWhite();
    myGLCD.drawRect(120, 750, 360, 799);
    myGLCD.setFont(BigFont);
    colorTextWhite();
    colorTextBackBlack();
    myGLCD.print("U N L O C K", CENTER, 770);
    analogWrite(ledPin, ledPinFading);  // turn LED ON
    if(now.second() > 53){
      nowSeconds = 4 - (59 - now.second());
    }else{
      nowSeconds = now.second() + 5;
    }
    clockScreen();
    a = 1;
  }
  lastButtonState = reading;
  //---------------------------------------------------------------------------------- change color of unlock button
  if(myTouch.dataAvailable() && (a == 1))
  {
    myTouch.read();
    tp_y = myTouch.getX();
    tp_x = 480 - myTouch.getY();
    if(playSongMP3){
      mp3ButtonsActions();
    }
    if((tp_x > 120) && (tp_x < 360) && (tp_y > 750) && (tp_y < 799))
     { 
      colorTextWhite();
      myGLCD.fillRect(120, 750, 360, 799);
      myGLCD.setFont(BigFont);
      colorBlack();
      colorTextBackWhite();
      myGLCD.print("U N L O C K", CENTER, 770);
      j = 3;
      mainMenuNumber = 999;
      delay (100);
      menu();
      a = 2;
    }
  }
  
  if(ledPin != 0){
    clockMenuRotate();
    
  if (myTouch.dataAvailable())
    {
      myTouch.read();
      tp_y = myTouch.getX();
      tp_x = 480 - myTouch.getY();
      classesForPrograms();
      
      if(((lockScreenM == now.minute()) || (lockScreenS == now.second())) && (mainMenuNumber != 0)){
        buttonState = HIGH;
      }
    }
  }
 //---------------------------------------------------------------------------------- auto lock the scree
 if((nowSeconds == now.second()) && (a == 1)){
     buttonState = HIGH;
 }
 //---------------------------------------------------------------------------------- lock the scree when press the buton
  if((buttonState == HIGH) && ((a == 1) || (a == 2))){
    myGLCD.clrScr();
    if((buttonState == HIGH) && (a == 1)){                             //lock the scree when press the buton
      colorBlack();
      myGLCD.fillRect(0, 350, 239, 399);
      j = 0;
      a = 0;
      clockMenuS = 0;
      mainMenuNumber = 0;
      analogWrite(ledPin, 0);
      delay (400);
      previous = LOW;
      lastButtonState = LOW;
    }
    if((buttonState == HIGH) && (a == 2)){         //from menues lock the scree when press the buton
      mainMenuNumber = 0;
      analogWrite(ledPin, 0);
      j = 0;
      a = 0; 
      clockMenuS = 0;
      delay (400);
      previous = LOW;
      lastButtonState = LOW;
      clockScreen();
    }
  }
  if((alarmHour == hour) && (alarmMinutes == minute) && (AlarmOnOff == 1)){
    analogWrite(ledPin, ledPinFading);
    ringingSound += 5;
    alarmRinging();
  }
  delay (5);   
}

