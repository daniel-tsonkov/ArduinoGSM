void ringtones(){
  myGLCD.clrScr();
  menuClock();
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("Ringtones", CENTER, 30);
  
  backButton();
}

void ringtonesFunctions(){
  toSettingsMenu();
}
