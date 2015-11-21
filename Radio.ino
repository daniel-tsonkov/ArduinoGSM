void radio(){
  myGLCD.clrScr(); 
  menuClock();
  
  /*myGLCD.setFont(SevenSegNumFont);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setColor(255, 255, 255);
  myGLCD.print("80", 200, 100);
  myGLCD.print("0", 265, 100);*/
  myGLCD.setFont(SevenSeg_XXXL_Num);
  colorTextWhite();
  colorTextBackBlack();
  myGLCD.printNumF(radioFrequency, 1, CENTER, 130);
  
  int yA = 235;
  int yB = yA + 45;
  int charY = 250;
  
  myGLCD.setFont(BigFont);
  for(int i = 0; i <= 1; i++){
    if(radioButtonsArray[i] == "")
      {
      }else{
        color150150150();
        myGLCD.fillRoundRect(1, yA, 478, yB);
        colorBlack();
        backColor150150150();
        myGLCD.print(radioButtonsArray[i], CENTER, charY);
        yA += 100;
        yB += 100;
        charY += 100;
      }
  }
  
  if(radioOnOff == 0){
    colorRed();
    myGLCD.fillRoundRect(1, 540, 479, 585);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(255, 0, 0);
    colorBlack();
    myGLCD.print("OFF", CENTER, 555);
  }else{
    colorGreen();
    myGLCD.fillRoundRect(1, 540, 479, 585);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(0, 255, 0);
    colorBlack();
    myGLCD.print("ON", CENTER, 555);
  }
  
  backButton();
}
void radioFunction(){
  int yA = 235;
  int yB = yA + 45;
  int charY = 250;
  
  myGLCD.setFont(BigFont);
  for(int i = 0; i <= 1; i++){
    if((tp_y > yA) && (tp_y < yB)){
        if(gamesButtonsArray[i] == ""){
        }else{
          switch (i + 1) {
            case 1://---------------------------------------------------------------------------------- update frequency
            radioFrequency += 0.1;
            if(radioFrequency == 109){
              radioFrequency = 87.9;
            }
            myGLCD.setFont(SevenSeg_XXXL_Num);
            colorTextWhite();
            colorTextBackBlack();
            myGLCD.printNumF(radioFrequency, 1, CENTER, 130);
            zakusnenie();
            break;
            case 2://---------------------------------------------------------------------------------- reset frequency
            radioFrequency = 87.9;
            myGLCD.setFont(SevenSeg_XXXL_Num);
            colorTextWhite();
            colorTextBackBlack();
            myGLCD.printNumF(radioFrequency, 1, CENTER, 130);
            zakusnenie();
            break;
          }
        }
      }
      yA += 100;
      yB += 100;
      charY += 100;
  }
  
  if(((tp_x > 1) && (tp_x < 479)) && ((tp_y > 540) && (tp_y < 585))){
    if(radioOnOff == 0){
      myGLCD.setColor(255, 0, 0);
      myGLCD.fillRoundRect(1, 540, 479, 585);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(255, 0, 0);
      colorBlack();
      myGLCD.print("OFF", CENTER, 555);
      radioOnOff = 1;
    }else{
      myGLCD.setColor(0, 255, 0);
      myGLCD.fillRoundRect(1, 540, 479, 585);
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(0, 255, 0);
      colorBlack();
      myGLCD.print("ON", CENTER, 555);
      radioOnOff = 0;
    }
    zakusnenie();
  }
  
 toMainMenu(); 
}
