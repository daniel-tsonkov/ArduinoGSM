void ofi(){
  myGLCD.clrScr(); 
  menuClock();
  
  int yA = 35;
  int yB = yA + 45;
  int charY = 50;
  
  myGLCD.setFont(BigFont);
  for(int i = 0; i <= 5; i++){
    if(officeStringArray[i] == "")
      {
      }else{
        color150150150();
        myGLCD.fillRoundRect(1, yA, 478, yB);
        colorBlack();
        backColor150150150();
        myGLCD.print(officeStringArray[i], CENTER, charY);
        yA += 60;
        yB += 60;
        charY += 60;
      }
  }
  
  backButton();
}

void ofiFunctions(){
  int yA = 35;
  int yB = yA + 45;
  //int charY = 50;
  if (myTouch.dataAvailable()){
  for(int i = 0; i <= 11; i++){
    if((tp_y > yA) && (tp_y < yB)){
          switch (i + 1) {
            case 1://---------------------------------------------------------------------------------- from doc menu functions to new txt file
            mainMenuNumber = 31;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            newTxt();
            break;
            case 2://---------------------------------------------------------------------------------- from doc menu functions to new spredsheet
            mainMenuNumber = 32;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            newSpread();
            break;
            case 3://---------------------------------------------------------------------------------- from doc menu functions to new paint
            mainMenuNumber = 33;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            newPaint();
            break;
            case 4://---------------------------------------------------------------------------------- from doc menu functions to profile
            mainMenuNumber = 34;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            openTxt();
            break;
            case 5://---------------------------------------------------------------------------------- from doc menu functions to open spreadsheet
            mainMenuNumber = 35;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            openSpread();
            break;
            case 6://---------------------------------------------------------------------------------- from doc menu functions to open paint
            mainMenuNumber = 36;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            openPaint();
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
  }
  toMainMenu();
}
