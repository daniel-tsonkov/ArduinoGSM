void keyboard(){
 xString = 20;
  yString = 120;
  for(int k = 0; k<= 127; k++){
    if((k == 20) || (k == 40) || (k == 60) || (k == 80) || (k == 100) || (k == 120)){
      xString = 20;
      yString += 20;
    }
    myGLCD.setFont(BigFont);
    myGLCD.print(smsStringArray[k], xString, yString);
    xString += 15;
  }
 
  colorTextWhite();
  myGLCD.drawRoundRect(375, 752, 478, 798);
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("enter", 390, 765);

  colorTextWhite();
  myGLCD.drawRoundRect(1, 752, 105, 798);
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("shift", 15, 765);
  
  colorTextWhite();
  myGLCD.drawRoundRect(110, 752, 370, 798);
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("space", CENTER, 765);
  
  colorTextWhite();
  myGLCD.drawRoundRect(373, 700, 478, 748);
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("bs", 410, 718); 
}

void smallKeypad(){
  
  int xA = 1;
  int yA = 480;
  int xB = xA + 48;
  int yB = yA + 48;
  int charX = 17;
  int charY = 494;
  colorTextWhite();
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  for(int i = 0; i <= 35; i++){
    if(xB > 480){
      xA = 1;
      xB = xA + 48;
      yA = yB + 5;
      yB = yA + 48;
      charX = 17;
      charY += 53;
    }    
    myGLCD.drawRoundRect(xA, yA, xB, yB);    
    myGLCD.print(smsSmallSymbols[i], charX, charY);
    xA += 53;
    xB += 53;
    charX += 53;
  }
  toUpOrSmall = 0;
}
void bigKeypad(){
  
  int xA = 1;
  int yA = 480;
  int xB = xA + 48;
  int yB = yA + 48;
  int charX = 17;
  int charY = 494;
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  for(int i = 0; i <= 35; i++){
    if(xB > 480){
      xA = 1;
      xB = xA + 48;
      yA = yB + 5;
      yB = yA + 48;
      charX = 17;
      charY += 53;
    }    
    myGLCD.print(smsBigSymbols[i], charX, charY);
    xA += 53;
    xB += 53;
    charX += 53;
  }
  toUpOrSmall = 1;
}
