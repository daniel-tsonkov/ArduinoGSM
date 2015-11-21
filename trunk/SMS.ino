void sms(){
  myGLCD.clrScr();
  menuClock();
  
  int yA = 35;
  int yB = yA + 45;
  int charY = 50;
  
  myGLCD.setFont(BigFont);
  for(int i = 0; i <= 11; i++){
    if(smsButtonsArray[i] == "")
      {
      }else{
        color150150150();
        myGLCD.fillRoundRect(1, yA, 478, yB);
        colorBlack();
        backColor150150150();
        myGLCD.print(smsButtonsArray[i], CENTER, charY);
        yA += 60;
        yB += 60;
        charY += 60;
      }
  }
  
  backButton();
}
void smsFunctions(){
  int yA = 35;
  int yB = yA + 45;
  int charY = 50;
  
  for(int i = 0; i <= 11; i++){
    if((tp_y > yA) && (tp_y < yB)){
        if(smsButtonsArray[i] == ""){
        }else{
          switch (i + 1) {
            case 1://---------------------------------------------------------------------------------- from sms menu functions to open sms
            mainMenuNumber = 21;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            openSMS();
            break;
            case 2://---------------------------------------------------------------------------------- from sms menu functions to new sms
            mainMenuNumber = 22;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            newSMS();
            break;
            case 3://---------------------------------------------------------------------------------- blank
            break;
            case 4://---------------------------------------------------------------------------------- blank
            break;
            case 5://---------------------------------------------------------------------------------- blank
            break;
            case 6://---------------------------------------------------------------------------------- blank
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
      }
      yA += 60;
      yB += 60;
      charY += 60;
    }
  
  toMainMenu();
}
