void web(){
  myGLCD.clrScr(); 
  menuClock();
  
  colorTextWhite();
  myGLCD.fillRect(1, 21, 480, 740);
  
  colorBlack();
  myGLCD.drawRect(1, 24, 400, 56);
  myGLCD.drawRoundRect(408, 24, 440, 56);
  myGLCD.setFont(BigFont);
  colorTextBackWhite();
  colorBlack();
  myGLCD.print("R", 416, 34);
  myGLCD.drawRoundRect(448, 24, 479, 56);
  myGLCD.print("S", 454, 34);
  
  backButton();
}
void webFunctions(){
  toMainMenu();
}
