void set(){
  myGLCD.clrScr();
  menuClock();
  
  int yA = 35;
  int yB = yA + 45;
  int charY = 50;
  
  myGLCD.setFont(BigFont);
  for(int i = 0; i <= 11; i++){
    if(setingsButtonsArray[i] == "")
      {
      }else{
        color150150150();
        myGLCD.fillRoundRect(1, yA, 478, yB);
        colorBlack();
        backColor150150150();
        myGLCD.print(setingsButtonsArray[i], CENTER, charY);
        yA += 60;
        yB += 60;
        charY += 60;
      }
  }

  backButton();
}
void setingMenu(){
  int yA = 35;
  int yB = yA + 45;
  //int charY = 50;
  
  for(int i = 0; i <= 11; i++){
    if((tp_y > yA) && (tp_y < yB)){
          switch (i + 1) {
            case 1://---------------------------------------------------------------------------------- from setting menu functions to alarm
            mainMenuNumber = 71;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            alarm();
            break;
            case 2://---------------------------------------------------------------------------------- from setting menu functions to display
            mainMenuNumber = 72;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            displayFade();
            break;
            case 3://---------------------------------------------------------------------------------- from setting menu functions to dateAndTame
            mainMenuNumber = 73;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            dateAndTime();
            break;
            case 4://---------------------------------------------------------------------------------- from setting menu functions to profile
            mainMenuNumber = 74;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            drawSetingPersonal();
            break;
            case 5://---------------------------------------------------------------------------------- from setting menu functions to wi-fi settings
            mainMenuNumber = 75;
            zakusnenie();
            wifiSettings();
            break;
            case 6://---------------------------------------------------------------------------------- from setting menu functions to ringtones settings
            mainMenuNumber = 76;
            zakusnenie();
            ringtones();
            break;
            case 7://---------------------------------------------------------------------------------- blank
            break;
            case 8://---------------------------------------------------------------------------------- blank
            break;
            case 9://---------------------------------------------------------------------------------- blank
            break;
            case 10://---------------------------------------------------------------------------------- blank
            break;
            case 11://---------------------------------------------------------------------------------- blank
            break;
            case 12://---------------------------------------------------------------------------------- blank
            break;
        }
      }
      yA = yB + 15;
      yB = yA + 45;
      //charY += 60;
    }
  toMainMenu();
}
