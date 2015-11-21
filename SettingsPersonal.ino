void drawSetingPersonal(){
  myGLCD.clrScr();
  menuClock();
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("Personal", CENTER, 30);
  myGLCD.print("setings", CENTER, 50);
  
  myGLCD.setFont(SmallFont);
  myGLCD.print("vibration", 26, 85);
  myGLCD.print("beep", 160, 85);
  colorTextWhite();
  myGLCD.drawRoundRect(10, 110, 110, 150);
  myGLCD.drawRoundRect(130, 110, 230, 150);
  if(vibratorOnOff == 1){
    colorGreen();
    myGLCD.fillRoundRect(11, 111, 109, 149);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(0, 255, 0);
    colorBlack();
    myGLCD.print("ON", 40, 121);
  }else{
    colorRed();
    myGLCD.fillRoundRect(11, 111, 109, 149);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(255, 0, 0);
    colorBlack();
    myGLCD.print("OFF", 35, 121);
  }
  if(beepSound == 1){
    colorGreen();
    myGLCD.fillRoundRect(131, 111, 229, 149);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(0, 255, 0);
    colorBlack();
    myGLCD.print("ON", 165, 121);
  }else{
    colorRed();
    myGLCD.fillRoundRect(131, 111, 229, 149);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(255, 0, 0);
    colorBlack();
    myGLCD.print("OFF", 160, 121);
  }
  backButton();
}
void setingsPersonal(){
  
  if((tp_x > 11) && (tp_x < 109) && (tp_y > 111) && (tp_y < 149)){//------------- vibration ON OFF 11, 111, 109, 149
    if(vibratorOnOff == 0){
      colorGreen();
      myGLCD.fillRoundRect(11, 111, 109, 149);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(0, 255, 0);
      colorBlack();
      myGLCD.print("ON", 40, 121);
      vibratorOnOff = 1;
    }else{
      colorRed();
      myGLCD.fillRoundRect(11, 111, 109, 149);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(255, 0, 0);
      colorBlack();
      myGLCD.print("OFF", 35, 121);
      vibratorOnOff = 0;
    }
    zakusnenie();
  }
  if((tp_x > 131) && (tp_x < 229) && (tp_y > 111) && (tp_y < 149)){//------------- beep ON OFF 131, 111, 229, 149
    if(beepSound == 0){
      colorGreen();
      myGLCD.fillRoundRect(131, 111, 229, 149);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(0, 255, 0);
      colorBlack();
      myGLCD.print("ON", 165, 121);
      beepSound = 1;
    }else{
      colorRed();
      myGLCD.fillRoundRect(131, 111, 229, 149);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(255, 0, 0);
      colorBlack();
      myGLCD.print("OFF", 160, 121);
      beepSound = 0;
    }
    zakusnenie();
  }
  toSettingsMenu();
}
