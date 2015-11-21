void clockScreen(){
  myGLCD.setFont(SevenSeg_XXXL_Num);
  colorTextWhite();
  if((AlarmOnOff == 1) || (wifiOnOff == 1)){
    myGLCD.fillRect(0, 345, 480, 420);
  }else{
    myGLCD.fillRect(0, 345, 480, 395);
  }
  
  colorTextWhite();
  myGLCD.setBackColor(0, 0, 0);
  if(hour < 10){
    myGLCD.print("0", 110, 240);
    myGLCD.printNumI(hour, 174, 240);
  }else{
    myGLCD.printNumI(hour, 110, 240);
  } 
  myGLCD.fillRect(242, 260, 252, 270);
  myGLCD.fillRect(242, 310, 252, 320);
  if(minute < 10){
    myGLCD.print("0", 260, 240);
    myGLCD.printNumI(minute, 324, 240);
  }else{
    myGLCD.printNumI(minute, 260, 240);
  }    
  myGLCD.setFont(BigFont);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setBackColor(255, 255, 255);
  String dayWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  myGLCD.print(dayWeek[dayOfWeek], CENTER, 350);
  
  myGLCD.setFont(BigFont);
  if(day < 10){
    myGLCD.print("0", 164, 370);
    myGLCD.printNumI(day, 179, 370);
  }else{
    myGLCD.printNumI(day, 164, 370);
  }
  myGLCD.print("/", 194, 370);
  if(month < 10){
    myGLCD.print("0", 211, 370);
    myGLCD.printNumI(month, 226, 370);
  }else{
    myGLCD.printNumI(month, 211, 370);
  }
  myGLCD.print("/", 240, 370);
  myGLCD.printNumI(year, 255, 370);
  
  clockX = 240;
  clockY = 400;
  wifiX = 250;
  wifiY = 392;
  iconClock();
  iconWifi();
  signal();
  bateryCheck();
}

void menuClock(){
  myGLCD.setColor(255, 174, 0);
  myGLCD.fillRect(1, 0, 479, 20);
  myGLCD.setFont(SmallFont);         
  colorBlack();
  myGLCD.setBackColor(255, 174, 0);
  if(hour < 10){
    myGLCD.print("0", 220, 5);
    myGLCD.printNumI(hour, 230, 5);
  }else{
    myGLCD.printNumI(hour, 220, 5);
  }
  myGLCD.print(":", CENTER, 5);
  if(minute < 10){
    myGLCD.print("0", 243, 5);
    myGLCD.printNumI(minute, 253, 5);
  }else{
    myGLCD.printNumI(minute, 243, 5);
  }
  signal();
  clockX = 420;
  clockY = 10;
  wifiX = 43;
  wifiY = 5;
  iconClock();
  iconWifi();
  bateryCheck();
}
void clockMenuRotate(){
  if(second == 1 && (mainMenuNumber != 0) && (minutesNow != minute)){//----------------------------------- clock menu rotate
     menuClock();
     minutesNow = minute;
  } 
}
