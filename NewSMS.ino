void newSMS(){
  myGLCD.clrScr();
  menuClock();
  colorTextWhite();
  myGLCD.drawRoundRect(1, 24, 430, 56);
  
  myGLCD.setFont(SmallFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("To:", 6, 34);
 
  myGLCD.setFont(SmallFont); 
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("ch:", 437, 34);
  myGLCD.printNumI(charSMS, 460, 34);
  
  color150150150();
  myGLCD.fillRoundRect(1, 64, 75, 104);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("Back", 6, 74);
  
  color150150150();
  myGLCD.fillRoundRect(80, 64, 159, 104);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("Book", 87, 74);
  
  myGLCD.setColor(0, 255, 0);
  myGLCD.fillRoundRect(164, 64, 238, 104);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(0, 255, 0);
  colorBlack();
  myGLCD.print("Send", 170, 74);
  smallKeypad();
  
  keyboard();
}

void drawSmsString(){
  int yString = 120;
  int tmpString = smsString.length();
  for(int i = 0; i = smsString.length() - 1; i++){
    myGLCD.setFont(BigFont);
    colorTextBackBlack();
    colorTextWhite();
    //myGLCD.print(smsString.length() + i, 20, 120);
  }
}

void drawTextSms(){
  
}
void newSMSFunctions(){
  if(charSMS <= 128){
  int xA = 1; //---------------------------------------------------------------------------------- dwaw sms symbols
  int yA = 480;
  int xB = xA + 48;
  int yB = yA + 48;
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  for(int i = 0; i <= 35; i++){
    if(xB > 480){
      xA = 1;
      xB = xA + 48;
      yA = yB + 5;
      yB = yA + 48;
    }
  if(((tp_x > xA) && (tp_x < xB)) && ((tp_y > yA) && (tp_y < yB))){
      zakusnenie();
      
      charSMS++;
      xString = 20;
      yString = 120;
      
      for(int j = 0; j <= 127; j++){
      
        if((smsStringArray[j] != "") && (smsStringArray[j + 1] == "")){
          if(toUpOrSmall == 0){
            smsStringArray[j + 1] = smsSmallSymbols[i];
            j = 127;
          }else{
            smsStringArray[j + 1] = smsBigSymbols[i];
            j = 127;
          }
        }
      }
      if(smsStringArray[0] == ""){
         smsStringArray[0] = smsSmallSymbols[i];
      }
      
      for(int k = 0; k <= 127; k++){
        if((k == 20) || (k == 40) || (k == 60) || (k == 80) || (k == 100) || (k == 120)){
          xString = 20;
          yString += 20;
        }
        myGLCD.setFont(BigFont);
        myGLCD.print(smsStringArray[k], xString, yString);
        xString += 15;
      }
      myGLCD.setFont(SmallFont);
      myGLCD.printNumI(charSMS, 460, 34);
    }
    xA += 53;
    xB += 53;
  }
  }
  //---------------------------------------------------------------------------------- backspace 373, 700, 478, 748
  /*if(((tp_x > 373) && (tp_x < 478)) && ((tp_y > 700) && (tp_y < 748))){
    zakusnenie();
    if((charSMS == 0) || (charSMS > 127)){
    }else{
      charSMS--;
      myGLCD.setFont(BigFont);
      myGLCD.setBackColor(0, 0, 0);
      myGLCD.setColor(0, 0, 0);
      myGLCD.print(smsString, 20, 120);
      //tempSmsString =  = smsString.length();
      int stringLength = smsString.length();//max length of string
      smsString.remove(stringLength - 1);
      myGLCD.setBackColor(0, 0, 0);
      myGLCD.setColor(255, 255, 255);
      myGLCD.print(smsString, 20, 120);
      myGLCD.setFont(SmallFont);
      myGLCD.printNumI(charSMS, 460, 34);
    }
  }*/
  //---------------------------------------------------------------------------------- space 110, 752, 370, 798
  /*if(((tp_x > 110) && (tp_x < 370)) && ((tp_y > 752) && (tp_y < 798))){
    zakusnenie();
    if(charSMS <= 128){
      charSMS++;
      xString = 20;
      yString = 120;
      //
      for(int j = 0; j <= 127; j++){
      
        if((smsStringArray[j] != "") && (smsStringArray[j + 1] == "")){
            smsStringArray[j + 1] = " ";
            
        }
      }
      if(smsStringArray[0] == ""){
         smsStringArray[0] = " ";
      }
      //zakusnenie();
      for(int k = 0; k <= 127; k++){
        if((k == 20) || (k == 40) || (k == 60) || (k == 80) || (k == 100) || (k == 120)){
          xString = 20;
          yString += 20;
        }
        myGLCD.setFont(BigFont);
        myGLCD.print(smsStringArray[k], xString, yString);
        xString += 15;
      }
      myGLCD.setFont(SmallFont);
      myGLCD.printNumI(charSMS, 460, 34);
    }
  }*/
  //---------------------------------------------------------------------------------- send sms 164, 64, 238, 104
  if(((tp_x > 164) && (tp_x < 238)) && ((tp_y > 64) && (tp_y < 104))){
    for(int i = 0; i <= 127; i++){
      smsString += smsStringArray[i];
    }
    Serial.print(smsString);
    zakusnenie();
  }
  //---------------------------------------------------------------------------------- from SMS to book menu 80, 64, 159, 104
  if(((tp_x > 80) && (tp_x < 159)) && ((tp_y > 64) && (tp_y < 104))){
    colorTextWhite();
    myGLCD.fillRoundRect(80, 64, 159, 104);
    myGLCD.setFont(BigFont);
    colorTextBackWhite();
    colorBlack();
    myGLCD.print("Book", 87, 74);
    mainMenuNumber = 20;
    zakusnenie();
    book();
  }
  //------------------------------------------------------------------------------- from new SMS to main menu functions
  if(((tp_x > 1) && (tp_x < 75)) && ((tp_y > 64) && (tp_y < 104))){
    if (myTouch.dataAvailable()){
      colorTextWhite();
      myGLCD.fillRoundRect(1, 64, 75, 104);
      myGLCD.setFont(BigFont);
      colorTextBackWhite();
      colorBlack();
      myGLCD.print("Back", 6, 74);
      mainMenuNumber = 2;
      zakusnenie();
      sms();
    }
  }
  //-------------------------------------------------------------------------------- from SMS from small to uper or uper to small
  if (myTouch.dataAvailable()){
  //1, 752, 105, 798
  if(((tp_x > 1) && (tp_x < 105)) && ((tp_y > 752) && (tp_y < 798)) && (toUpOrSmall == 0)){
    bigKeypad();
    zakusnenie();
  }
  }
  if (myTouch.dataAvailable()){
  if(((tp_x > 1) && (tp_x < 105)) && ((tp_y > 752) && (tp_y < 798)) && (toUpOrSmall == 1)){
    smallKeypad();
    zakusnenie();
  }
  }
}
