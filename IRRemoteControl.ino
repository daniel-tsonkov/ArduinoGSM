void IRR(){
 myGLCD.clrScr(); 
  menuClock();
  
  int xA = 10;
  int yA = 80;
  int xB = xA + 150;
  int yB = yA + 150;
  int charX = 65;
  int charY = 150;
  int RRR = 20;
  int GGG = 30;
  int BBB = 10;
  
  myGLCD.setFont(BigFont);
  
  for(int i = 0; i <= 11; i++){
    if(xB > 480){
      xA = 10;
      xB = xA + 150;
      yA = yB + 3;
      yB = yA + 150;
      charX = 65;
      charY += 155;
      RRR += 20;
      BBB += 35;
    }
    if(IRButtonsArray[i] == ""){
      colorTextWhite();
      myGLCD.drawRect(xA, yA, xB, yB);
    }else{
      if(i == 11){
        colorRed();
        myGLCD.setBackColor(255, 0, 0);
      }else{
        myGLCD.setColor(RRR, GGG, BBB);
        myGLCD.setBackColor(RRR, GGG, BBB);
      }
      myGLCD.fillRect(xA, yA, xB, yB);
      colorTextWhite();
      myGLCD.print(IRButtonsArray[i], charX, charY);
    }
    xA += 153;
    xB += 153;
    charX += 150;
    GGG += 55;
  }
  
  backButton();
}
void IRRFunctions(){
  toMainMenu();
}
