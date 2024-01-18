void mp3(){
  myGLCD.clrScr(); 
  menuClock();
  
  myGLCD.setColor(120, 200, 255);
  colorTextBackBlack();
  myGLCD.drawLine(20, 570, 460, 570);
 
  buttonsMP3Player();
  
  backButton();
}
void mp3Functions(){
  mp3ButtonsActions();
  
  toMainMenu();
}
void buttonsMP3Player(){
  /*if(mainMenuNumber == 4){
    xPlayMP3Buttons = 20;
    yPlayMP3Buttons = 600;
  }else{
    xPlayMP3Buttons = 20;
    yPlayMP3Buttons = 30;
  }*/
  xPlayMP3Buttons = 20;
  yPlayMP3Buttons = 600;
  myGLCD.setFont(BigFont);
  backColor150150150();
  for(int i = 0; i < 5; i++){
    color150150150();
    myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
    colorBlack();
    myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
    xPlayMP3Buttons += 90;
  }
}
void mp3ButtonsActions(){
  /*if(mainMenuNumber == 4){
    xPlayMP3Buttons = 20;
    yPlayMP3Buttons = 600;
  }else{
    xPlayMP3Buttons = 20;
    yPlayMP3Buttons = 30;
  }*/
  xPlayMP3Buttons = 20;
  yPlayMP3Buttons = 600;
  for(int i = 0; i < 5; i++){
    if((tp_x > xPlayMP3Buttons) && (tp_x < xPlayMP3Buttons + 85) && (tp_y > yPlayMP3Buttons) && (tp_y < yPlayMP3Buttons + 70)){
    myGLCD.setFont(BigFont);
      switch (i + 1) {
        case 1://---------------------------------------------------------------------------------- previw
        myGLCD.setColor(100, 100, 100);
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        myGLCD.setBackColor(100, 100, 100);
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        playSongMP3 = true;
        Serial3.write(wakeUP, sizeof(wakeUP));
        delay(100);
        Serial3.write(previousSong, sizeof(previousSong));
        zakusnenie();
        color150150150();
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        backColor150150150();
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        break;
        case 2://---------------------------------------------------------------------------------- pause
        myGLCD.setColor(100, 100, 100);
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        myGLCD.setBackColor(100, 100, 100);
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        playSongMP3 = true;
        Serial3.write(pauseSong, sizeof(pauseSong));
        zakusnenie();
        color150150150();
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        backColor150150150();
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        break;
        case 3://---------------------------------------------------------------------------------- stop
        myGLCD.setColor(100, 100, 100);
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        myGLCD.setBackColor(100, 100, 100);
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        playSongMP3 = false;
        Serial3.write(stopSong, sizeof(stopSong));
        delay(100);
        Serial3.write(sleepMode, sizeof(sleepMode));
        zakusnenie();
        color150150150();
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        backColor150150150();
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        break;
        case 4://---------------------------------------------------------------------------------- play
        myGLCD.setColor(100, 100, 100);
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        myGLCD.setBackColor(100, 100, 100);
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        playSongMP3 = true;
        Serial3.write(wakeUP, sizeof(wakeUP));
        delay(100);
        Serial3.write(resumeSong, sizeof(resumeSong));
        zakusnenie();
        color150150150();
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        backColor150150150();
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        break;
        case 5://---------------------------------------------------------------------------------- next
        myGLCD.setColor(100, 100, 100);
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        myGLCD.setBackColor(100, 100, 100);
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        playSongMP3 = true;
        Serial3.write(wakeUP, sizeof(wakeUP));
        delay(100);
        Serial3.write(nextSong, sizeof(nextSong));
        zakusnenie();
        color150150150();
        myGLCD.fillRect(xPlayMP3Buttons, yPlayMP3Buttons, xPlayMP3Buttons + 85, yPlayMP3Buttons + 70);
        colorBlack();
        backColor150150150();
        myGLCD.print(buttonsMP3Array[i], xPlayMP3Buttons + 5, yPlayMP3Buttons + 28);
        break;
      }
    }
    xPlayMP3Buttons += 90;
  }
}
