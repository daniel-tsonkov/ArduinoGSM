void alarm(){
  myGLCD.clrScr();
  menuClock();
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("Set alarm", CENTER, 30);
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("hour", 145, 80);  
  colorTextWhite();
  myGLCD.drawRoundRect(130, 100, 225, 160);
  
  myGLCD.setFont(SevenSegNumFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.printNumI(alarmHour, 145, 105);
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("minutes", 240, 80);
  
  colorTextWhite();
  myGLCD.drawRoundRect(250, 100, 345, 160);  
  myGLCD.setFont(SevenSegNumFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.printNumI(alarmMinutes, 265, 105);

  colorTextWhite();
  myGLCD.drawRoundRect(130, 170, 225, 230);  
  myGLCD.setFont(BigFont);
  //colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("UP", 162, 195);
  
  colorTextWhite();
  myGLCD.drawRoundRect(130, 240, 225, 300);  
  //myGLCD.setFont(BigFont);
  //colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("DOWN", 147, 265);  
  
  colorTextWhite();
  myGLCD.drawRoundRect(250, 170, 345, 230);  
  //myGLCD.setFont(BigFont);
  //colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("UP", 282, 195);
  
  colorTextWhite();
  myGLCD.drawRoundRect(250, 240, 345, 300);  
  //myGLCD.setFont(BigFont);
  //colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("DOWN", 267, 265);
  
  if(AlarmOnOff == 0){
    colorRed();
    myGLCD.fillRoundRect(1, 680, 479, 725);
    //myGLCD.setFont(BigFont);
    myGLCD.setBackColor(255, 0, 0);
    colorBlack();
    myGLCD.print("OFF", CENTER, 695);
  }else{
    colorGreen();
    myGLCD.fillRoundRect(1, 680, 479, 725);
    //myGLCD.setFont(BigFont);
    myGLCD.setBackColor(0, 255, 0);
    colorBlack();
    myGLCD.print("ON", CENTER, 695);
  }
  backButton();
}
void setingsAlarm(){
  if(((tp_x > 130) && (tp_x < 225)) && ((tp_y > 170) && (tp_y < 230))){  //set alarm hour UP 130, 170, 225, 230
    alarmHour++;
    if(alarmHour == 24){
      alarmHour = 0;
    }
    colorBlack();
    myGLCD.fillRoundRect(135, 105, 220, 155);
    myGLCD.setFont(SevenSegNumFont);
    colorTextBackBlack();
    colorTextWhite();
    myGLCD.printNumI(alarmHour, 145, 105);
    zakusnenie();
  }
  if(((tp_x > 130) && (tp_x < 225)) && ((tp_y > 240) && (tp_y < 300))){  //set alarm hour DOWN 130, 240, 225, 300
    alarmHour--;
    if(alarmHour == 255){
      alarmHour = 23;
    }
    colorBlack();
    myGLCD.fillRoundRect(135, 105, 220, 155);
    myGLCD.setFont(SevenSegNumFont);
    colorTextBackBlack();
    colorTextWhite();
    myGLCD.printNumI(alarmHour, 145, 105);
    zakusnenie();
  }
  if(((tp_x > 250) && (tp_x < 345)) && ((tp_y > 170) && (tp_y < 230))){  //set alarm minutes UP
    alarmMinutes++;
    if(alarmMinutes == 60){
      alarmMinutes = 0;
    }
    colorBlack();
    myGLCD.fillRoundRect(255, 105, 340, 155);
    myGLCD.setFont(SevenSegNumFont);
    colorTextBackBlack();
    colorTextWhite();
    myGLCD.printNumI(alarmMinutes, 265, 105);
    zakusnenie();
  }
  if(((tp_x > 250) && (tp_x < 345)) && ((tp_y > 240) && (tp_y < 300))){  //set alarm minutes DOWN 250, 240, 345, 300
    alarmMinutes--;
    if(alarmMinutes == 255){
      alarmMinutes = 59;
    }
    colorBlack();
    myGLCD.fillRoundRect(255, 105, 340, 155);
    myGLCD.setFont(SevenSegNumFont);
    colorTextBackBlack();
    colorTextWhite();
    myGLCD.printNumI(alarmMinutes, 265, 105);
    zakusnenie();
  }
  toSettingsMenu();
  
  if(((tp_x > 1) && (tp_x < 479)) && ((tp_y > 680) && (tp_y < 725))){//------------- set alarm ON or OFF 1, 680, 479, 725
    if(AlarmOnOff == 1){
      colorRed();
      myGLCD.fillRoundRect(1, 680, 479, 725);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(255, 0, 0);
      colorBlack();
      myGLCD.print("OFF", CENTER, 695);
      AlarmOnOff = 0;
    }
    else{
      colorGreen();
      myGLCD.fillRoundRect(1, 680, 479, 725);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(0, 255, 0);
      colorBlack();
      myGLCD.print("ON", CENTER, 695);
      AlarmOnOff = 1;
    }
  zakusnenie();
  menuClock();
  }
}
void iconClock(){
  if(AlarmOnOff == 1){
    if(mainMenuNumber == 0){
      colorBlack();
    }else{    
      colorTextWhite();
    }
    myGLCD.drawCircle(clockX, clockY, 6);
    myGLCD.drawCircle(clockX, clockY, 7); 
    myGLCD.drawLine(clockX, clockY + 1, clockX + 4, clockY - 5);
    myGLCD.drawLine(clockX, clockY + 1, clockX - 4, clockY - 3);
  }
}
void alarmRinging(){
  if(displayRinging == 1){
    myGLCD.clrScr();    
  
    myGLCD.setFont(SevenSegNumFont);
    colorTextWhite();
    colorTextBackBlack();
    if(hour <= 9){
      myGLCD.print("0", 47, 150);
      myGLCD.printNumI(hour, 70, 150);
    }else{
      myGLCD.printNumI(hour, 47, 150);
    } 
    colorTextWhite();
    myGLCD.fillRect(110, 164, 115, 169);
    colorTextWhite();
    myGLCD.fillRect(110, 184, 115, 189);
    if(minute < 10){
      myGLCD.print("0", 115, 150);
      myGLCD.printNumI(minute, 150, 150);
    }else{
      myGLCD.printNumI(minute, 115, 150);
    }
    mainMenuNumber = 511;
    displayRinging = 0;
  }
  if(ringingSound == 10){
    digitalWrite(zumerPin, HIGH);
    digitalWrite(vibratorPin, HIGH);
    colorGreen();
    myGLCD.fillRoundRect(1, 350, 239, 385);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(0, 255, 0);
    colorBlack();
    myGLCD.print("A L A R M", CENTER, 360);
  }
  if((ringingSound == 500)){
    digitalWrite(zumerPin, LOW);
    digitalWrite(vibratorPin, LOW);
  }
  if((ringingSound == 1000)){
    digitalWrite(zumerPin, HIGH);
    digitalWrite(vibratorPin, HIGH);
    colorRed();
    myGLCD.fillRoundRect(1, 350, 239, 385);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(255, 0, 0);
    colorBlack();
    myGLCD.print("A L A R M", CENTER, 360);
  }
  if((ringingSound == 1500)){
    digitalWrite(zumerPin, LOW);
    digitalWrite(vibratorPin, LOW);
    ringingSound = 0;
  }
  if(ringingSound == 2010){
    ringingSound = 0;
  }
}
//----------------------------------------------------------------------------------- stop alarm ringing
void stopAlarmRinging(){
  if(((tp_x > 210) && (tp_x < 3800)) && ((tp_y > 3500) && (tp_y < 3800)) && (AlarmOnOff == 1) && (mainMenuNumber == 511)){
     digitalWrite(ledPin, LOW);
     digitalWrite(zumerPin, LOW);
     digitalWrite(vibratorPin, LOW);
     AlarmOnOff = 0;
     mainMenuNumber = 0;
     displayRinging = 1;
     a = 0;
     clockScreen();
  }
}
