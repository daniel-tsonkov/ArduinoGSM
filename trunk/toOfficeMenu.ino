void toOfficeMenu(){
  if (myTouch.dataAvailable()){
    if((tp_y > 740) && (tp_y < 785)){
      myGLCD.setColor(80, 80, 80);
      myGLCD.fillRoundRect(1, 740, 479, 785);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(80, 80, 80);
      colorBlack();
      myGLCD.print("B a c k", CENTER, 755);
      mainMenuNumber = 3;
      zakusnenie();
      ofi();
    }
  }
}
