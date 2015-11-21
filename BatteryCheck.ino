void bateryCheck(){
  colorTextWhite();  
  myGLCD.drawRect(431, 4, 448, 15);
  myGLCD.fillRect(432, 5, 435, 14);
  myGLCD.fillRect(436, 5, 439, 14);
  myGLCD.fillRect(440, 5, 443, 14);
  //myGLCD.fillRect(224, 4, 227, 14); //temporary for test
  myGLCD.fillRect(448, 6, 449, 13);
  
  myGLCD.setFont(SmallFont);
  if(mainMenuNumber != 0){
    myGLCD.setBackColor(255, 174, 0);
  }else{
    myGLCD.setBackColor(0, 0, 0);
  }
  colorTextWhite();
  myGLCD.printNumI(batteryLevel, 455, 4);
  myGLCD.print("%", 470, 4);
}
