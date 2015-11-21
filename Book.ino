void book(){
  myGLCD.clrScr();
  menuClock();
  colorTextWhite();
  myGLCD.drawRoundRect(1, 24, 479, 685);
 
  /*myGLCD.setColor(150, 150, 150);
  myGLCD.fillRoundRect(1, 230, 239, 265);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(150, 150, 150);
  myGLCD.setColor(0, 0, 0);
  myGLCD.print("U P", CENTER, 240);
  
  myGLCD.setColor(150, 150, 150);
  myGLCD.fillRoundRect(1, 270, 239, 305);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(150, 150, 150);
  myGLCD.setColor(0, 0, 0);
  myGLCD.print("D O W N", CENTER, 280);*/
  
  color150150150();
  myGLCD.fillRoundRect(1, 690, 479, 735);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("O K", CENTER, 705);

  backButton();
}
void bookFunctions(){
  //------------------------------------------------------------------------------------------------------------- Book with GSM Numbers to GSM or SMS 1, 740, 479, 785
  if((tp_x > 1) && (tp_x < 479) && (tp_y > 740) && (tp_y < 785)){
    colorTextWhite();
    myGLCD.fillRoundRect(1, 740, 479, 785);
    myGLCD.setFont(BigFont);
    colorTextBackWhite();
    colorBlack();
    myGLCD.print("B a c k", CENTER, 755);
    zakusnenie();
    if(mainMenuNumber == 10){
      mainMenuNumber = 1;
      gsm();
    }
    if(mainMenuNumber == 20){
      mainMenuNumber = 2;
      sms();
    }
 }
}
