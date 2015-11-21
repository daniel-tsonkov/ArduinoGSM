void menu(){
  myGLCD.clrScr(); 
  menuClock();  
  colorTextWhite();
  myGLCD.drawRect(1, 22, 478, 798);
  
  int xA = 10;
  int yA = 80;
  int xB = xA + 150;
  int yB = yA + 150;
  int charX = 65;
  int charY = 150;
  int RRR = 20;
  int GGG = 30;
  int BBB = 10;
  
  myGLCD.setFont(BigFont);
  
  for(int i = 0; i <= 11; i++){
    if(xB > 480){
      xA = 10;
      xB = xA + 150;
      yA = yB + 3;
      yB = yA + 150;
      charX = 65;
      charY += 155;
      RRR += 20;
      BBB += 35;
    }
    if(menuButtonsArray[i] == ""){
    }else{
      myGLCD.setColor(RRR, GGG, BBB);
      myGLCD.fillRect(xA, yA, xB, yB);
      colorTextWhite();
      myGLCD.drawRoundRect(xA + 5, yA + 5, xB - 5, yB - 5);
      myGLCD.setBackColor(RRR, GGG, BBB);
      myGLCD.print(menuButtonsArray[i], charX, charY);
    }
    xA += 153;
    xB += 153;
    charX += 150;
    GGG += 55;
  }
  
  clockMenuS = 1;
}
void mainMenuChoice(){
  int xA = 10;
  int yA = 80;
  int xB = xA + 150;
  int yB = yA + 150;
  int charX = 65;
  int charY = 150;
  
  for(int i = 0; i <= 11; i++){
    if(xB > 480){
      xA = 10;
      xB = xA + 150;
      yA = yB + 3;
      yB = yA + 150;
      charX = 65;
      charY += 155;
    } 
        
    if((tp_x > xA) && (tp_x < xB) && (tp_y > yA) && (tp_y < yB)){
      if(menuButtonsArray[i] == ""){
      }else{
        switch (i + 1) {
          case 1://---------------------------------------------------------------------------------- from main menu functions to GSM
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          gsm();
          mainMenuNumber = 1;
          menuNumber = 1;
          break;
          case 2://---------------------------------------------------------------------------------- from main menu functions to SMS
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          sms();
          mainMenuNumber = 2;
          menuNumber = 2;
          break;
          case 3://---------------------------------------------------------------------------------- from main menu functions to Office
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          ofi();
          mainMenuNumber = 3;
          menuNumber = 3;
          break;
          case 4://---------------------------------------------------------------------------------- from main menu functions to mp3
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          mp3();
          mainMenuNumber = 4;
          menuNumber = 4;
          break;
          case 5://---------------------------------------------------------------------------------- from main menu functions to calculator
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          cal();
          mainMenuNumber = 5;
          menuNumber = 5;
          break;
          case 6://---------------------------------------------------------------------------------- from main menu functions to GPS
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          gps();
          mainMenuNumber = 6;
          menuNumber = 6;
          break;
          case 7://---------------------------------------------------------------------------------- from main menu functions to setting
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          set();
          mainMenuNumber = 7;
          menuNumber = 7;
          break;
          case 8://---------------------------------------------------------------------------------- from main menu functions to games
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          game();
          mainMenuNumber = 8;
          menuNumber = 8;
          break;
          case 9://---------------------------------------------------------------------------------- from main menu functions to web
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          web();
          mainMenuNumber = 9;
          menuNumber = 9;
          break;
          case 10://---------------------------------------------------------------------------------- from main menu functions to radio
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          radio();
          mainMenuNumber = 100;
          menuNumber = 100;
          break;
          case 11://---------------------------------------------------------------------------------- from main menu functions to IR remote control
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          IRR();
          mainMenuNumber = 11;
          menuNumber = 11;
          break;
          case 12://---------------------------------------------------------------------------------- from main menu functions to File Manager
          color150150150();
          myGLCD.fillRect(xA, yA, xB, yB);
          backColor150150150();
          colorTextWhite();
          myGLCD.print(menuButtonsArray[i], charX, charY);
          zakusnenie();
          fileMan();
          mainMenuNumber = 12;
          menuNumber = 12;
          break;
        }
      }
    }
    xA += 153;
    xB += 153;
    charX += 150;
  }
}
