void drawSnake(){
  myGLCD.clrScr();
  menuClock();
  colorTextWhite();
  myGLCD.drawRect(1, 22, 478, 480);
  
  color150150150();
  myGLCD.fillRoundRect(65, 260, 175, 295);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("UP", CENTER, 270);
  
  color150150150();
  myGLCD.fillRoundRect(65, 305, 175, 340);
  //myGLCD.setFont(BigFont);
  //myGLCD.setBackColor(150, 150, 150);
  colorBlack();
  myGLCD.print("Down", CENTER, 315);
  
  color150150150();
  myGLCD.fillRoundRect(1, 260, 55, 340);
  //myGLCD.setFont(BigFont);
  //myGLCD.setBackColor(150, 150, 150);
  colorBlack();
  myGLCD.print("L", 20, 290);
  
  color150150150();
  myGLCD.fillRoundRect(185, 260, 239, 340);
  //myGLCD.setFont(BigFont);
  //myGLCD.setBackColor(150, 150, 150);
  colorBlack();
  myGLCD.print("R", 200, 290);

  backButton();
}
void snake(){
  toGameMenu();
}
