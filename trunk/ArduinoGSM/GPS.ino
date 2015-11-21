void gps(){
  myGLCD.clrScr(); 
  menuClock();
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("GPS tracker", CENTER, 40);
  
  backButton();
}
void gpsFunctions(){
  toMainMenu();
}
