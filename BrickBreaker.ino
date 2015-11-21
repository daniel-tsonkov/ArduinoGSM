void drawBrickBreaker(){
  myGLCD.clrScr();
  menuClock();
  colorTextWhite();
  myGLCD.drawRect(1, 22, 238, 295);

  color150150150();
  myGLCD.fillRoundRect(1, 305, 125, 340);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("Left", 32, 315);
  
  color150150150();
  myGLCD.fillRoundRect(135, 305, 239, 340);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("Right", 147, 315);

  backButton();
}
void brickBreaker(){
  toGameMenu();
}
