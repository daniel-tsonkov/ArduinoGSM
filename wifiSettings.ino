void wifiSettings(){
  myGLCD.clrScr();
  menuClock();
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("WI-FI", CENTER, 50);
  
  if(wifiOnOff == 0){
    colorRed();
    myGLCD.fillRoundRect(1, 680, 479, 725);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(255, 0, 0);
    colorBlack();
    myGLCD.print("OFF", CENTER, 695);
  }else{
    colorGreen();
    myGLCD.fillRoundRect(1, 680, 479, 725);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(0, 255, 0);
    colorBlack();
    myGLCD.print("ON", CENTER, 695);
  }
  
  backButton();
}
void wifiFunctions(){
  if(((tp_x > 1) && (tp_x < 479)) && ((tp_y > 680) && (tp_y < 725))){//------------- set wi-fi ON or OFF 1, 680, 479, 725
    if(wifiOnOff == 1){
      colorRed();
      myGLCD.fillRoundRect(1, 680, 479, 725);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(255, 0, 0);
      colorBlack();
      myGLCD.print("OFF", CENTER, 695);
      wifiOnOff = 0;
    }
    else{
      colorGreen();
      myGLCD.fillRoundRect(1, 680, 479, 725);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(0, 255, 0);
      colorBlack();
      myGLCD.print("ON", CENTER, 695);
      wifiOnOff = 1;
    }
  zakusnenie();
  menuClock();
  }
  
  toSettingsMenu();
}
void iconWifi(){
  if(wifiOnOff == 1){
    if(mainMenuNumber == 0){
      colorTextBackWhite();
      colorBlack();
      myGLCD.setFont(BigFont);
    }else{
      myGLCD.setBackColor(255, 174, 0);    
      colorTextWhite();
      myGLCD.setFont(SmallFont);
    }
    myGLCD.print("WI-FI", wifiX, wifiY);
  }
}
