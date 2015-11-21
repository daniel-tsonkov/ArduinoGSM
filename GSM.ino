void gsm(){
  myGLCD.clrScr(); 
  menuClock();
  colorTextWhite();
  myGLCD.drawRoundRect(1, 24, 478, 66);
 
  colorTextWhite(); // draw delete symbol from tellephone number
  myGLCD.fillRoundRect(431, 29, 473, 61);
  colorBlack();
  myGLCD.drawLine(436, 34, 468, 45);
  colorBlack();
  myGLCD.drawLine(436, 34, 436, 56);
  colorBlack();
  myGLCD.drawLine(436, 56, 468, 45); 

  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  /*if(countCharTelNumber > 11){
    myGLCD.setFont(SmallFont);
  }else{
    myGLCD.setFont(BigFont);
  }*/
  myGLCD.print(telNumber, 10, 39);//telNumber
  
  /*myGLCD.setColor(150, 150, 150);
  myGLCD.fillRoundRect(1, 77, 75, 117);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(150, 150, 150);
  myGLCD.setColor(0, 0, 0);
  myGLCD.print("Back", 6, 90);*/
  
  color150150150();
  myGLCD.fillRoundRect(80, 77, 159, 117);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("Book", 87, 90);
  
  colorGreen();
  myGLCD.fillRoundRect(164, 77, 238, 117);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(0, 255, 0);
  colorBlack();
  myGLCD.print("Dial", 170, 90);
  
  drawDialButtons();
  
  myGLCD.drawRoundRect(90, 217, 385, 607);
  
  backButton();
}
void drawDialButtons(){
  int xA = 100;
  int yA = 227;
  int xB = xA + 85;
  int yB = yA + 85;
  int charX = 120;
  int charY = 245;
  
  myGLCD.setFont(SevenSegNumFont);
  colorTextBackBlack();
  colorTextWhite();
  for(int i = 0; i <= 11; i++){
    if(xB > 380){
      xA = 100;
      xB = xA + 85;
      yA = yB + 10;
      yB = yA + 85;
      charX = 125;
      charY += 95;
    } 
    myGLCD.drawRoundRect(xA, yA, xB, yB);
    if((i == 9) || (i == 11)){
      myGLCD.setFont(BigFont);
    }else{
      myGLCD.setFont(SevenSegNumFont);
    }
    myGLCD.print(gsmButtonsArray[i], charX, charY);
    xA += 95;
    xB += 95;
    charX += 95;
  }
}
void dialingNumber(){
  myGLCD.fillScr(0, 0, 0);
  colorTextWhite();
  
  myGLCD.setFont(BigFont); //draw telephone number
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print(telNumber, CENTER, 175);
    
  myGLCD.setFont(BigFont); //draw telephone number
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("Dial...", CENTER, 215);
    
  myGLCD.setColor(255, 0, 0);
  myGLCD.fillRoundRect(1, 740, 479, 785);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(255, 0, 0);
  colorBlack();
  myGLCD.print("C A N C E L", CENTER, 755);
}
void drawTelNumber(){
  if(countCharTelNumber <= 25){
    countCharTelNumber++;
    //if(countCharTelNumber <= 11){
      telNumber = telNumber + tempSymbol;
      colorBlack();
      myGLCD.fillRoundRect(2, 25, 430, 65);
      myGLCD.setFont(BigFont);
      colorTextBackBlack();
      colorTextWhite();
      myGLCD.print(telNumber, 10, 39);
    //}
    /*if(countCharTelNumber > 11){
      telNumber = telNumber + tempSymbol;
      myGLCD.setColor(0, 0, 0);
      myGLCD.fillRoundRect(2, 25, 190, 65);
      myGLCD.setFont(SmallFont);
      myGLCD.setBackColor(0, 0, 0);
      myGLCD.setColor(255, 255, 255);
      myGLCD.print(telNumber, 10, 39);
    }*/
    tempSymbol = "";
  }
  zakusnenie();
}
void gsmFunctions(){
  //-------------------------------------------------------------------------------- from GSM to book menu 80, 77, 159, 117
  if(((tp_x > 80) && (tp_x < 159)) && ((tp_y > 77) && (tp_y < 117))){
    colorTextWhite();
    myGLCD.fillRoundRect(80, 77, 159, 117);
    myGLCD.setFont(BigFont);
    colorTextBackWhite();
    colorBlack();
    myGLCD.print("Book", 87, 90);
    mainMenuNumber = 10;
    zakusnenie();
    book();
  }
  int xA = 100;//--------dial number
  int yA = 227;
  int xB = xA + 85;
  int yB = yA + 85;
  int charX = 120;
  int charY = 245;
  
  myGLCD.setFont(SevenSegNumFont);
  colorTextBackBlack();
  colorTextWhite();
  for(int i = 0; i <= 11; i++){
    if(xB > 380){
      xA = 100;
      xB = xA + 85;
      yA = yB + 10;
      yB = yA + 85;
      charX = 125;
      charY += 95;
    } 
    myGLCD.drawRoundRect(xA, yA, xB, yB);
    if((i == 9) || (i == 11)){
      myGLCD.setFont(BigFont);
    }else{
      myGLCD.setFont(SevenSegNumFont);
    }
    myGLCD.print(gsmButtonsArray[i], charX, charY);
    xA += 95;
    xB += 95;
    charX += 95;
  }
  /*if(((TP_X < 3000) && (TP_X > 2550)) && ((TP_Y < 3000) && (TP_Y > 2450))){ //--------dial number
    tempSymbol = "1";
    drawTelNumber();
  }
  if(((TP_X < 3000) && (TP_X > 2550)) && ((TP_Y < 2350) && (TP_Y > 1750))){
    tempSymbol = "2";
    drawTelNumber();;
  }
  if(((TP_X < 3000) && (TP_X > 2550)) && ((TP_Y < 1600) && (TP_Y > 1050))){    
    tempSymbol = "3";
    drawTelNumber();
  }
  if(((TP_X < 2450) && (TP_X > 2050)) && ((TP_Y < 3000) && (TP_Y > 2450))){    
    tempSymbol = "4";
    drawTelNumber();
  }
  if(((TP_X < 2450) && (TP_X > 2050)) && ((TP_Y < 2350) && (TP_Y > 1750))){    
    tempSymbol = "5";
    drawTelNumber();
  }
  if(((TP_X < 2450) && (TP_X > 2050)) && ((TP_Y < 1600) && (TP_Y > 1050))){    
    tempSymbol = "6";
    drawTelNumber();
  }
  if(((TP_X < 1950) && (TP_X > 1550)) && ((TP_Y < 3000) && (TP_Y > 2450))){    
    tempSymbol = "7";
    drawTelNumber();
  }
  if(((TP_X < 1950) && (TP_X > 1550)) && ((TP_Y < 2350) && (TP_Y > 1750))){    
    tempSymbol = "8";
    drawTelNumber();
  }
  if(((TP_X < 1950) && (TP_X > 1550)) && ((TP_Y < 1600) && (TP_Y > 1050))){    
    tempSymbol = "9";
    drawTelNumber();
  }
  if(((TP_X < 1450) && (TP_X > 1050)) && ((TP_Y < 3000) && (TP_Y > 2450))){    
    tempSymbol = "*";
    drawTelNumber();
  }
  if(((TP_X < 1450) && (TP_X > 1050)) && ((TP_Y < 2350) && (TP_Y > 1750))){    
    tempSymbol = "0";
    drawTelNumber();
  }
  if(((TP_X < 1450) && (TP_X > 1050)) && ((TP_Y < 1600) && (TP_Y > 1050))){    
    tempSymbol = "#";
    countCharTelNumber++;    
    drawTelNumber();    
  }*/
  if(((tp_x > 431) && (tp_x < 473)) && ((tp_y > 29) && (tp_y < 61))){ //Delete char from number   
    int stringLength = telNumber.length();//max length of string
    telNumber.remove(stringLength - 1);
    if(countCharTelNumber > 0){
      countCharTelNumber--;
      //if(countCharTelNumber <= 11){
        colorBlack();
        myGLCD.fillRoundRect(2, 25, 430, 65);
        myGLCD.setFont(BigFont);
        colorTextBackBlack();
        colorTextWhite();
        myGLCD.print(telNumber, 10, 39);      
      //}
      /*if(countCharTelNumber > 11){
        myGLCD.setColor(0, 0, 0);
        myGLCD.fillRoundRect(2, 25, 190, 65);
        myGLCD.setFont(SmallFont);
        myGLCD.setBackColor(0, 0, 0);
        myGLCD.setColor(255, 255, 255);
        myGLCD.print(telNumber, 10, 39);
      }*/
    }
   zakusnenie(); 
  }
  if(((tp_x > 164) && (tp_x < 238)) && ((tp_y > 77) && (tp_y < 117))){
    String sendMessage = String("ATD") + telNumber + (";");
    int str_len = sendMessage.length() + 1;
    char input[str_len];
    sendMessage.toCharArray(input, str_len);
    Serial.println(input);
    Serial3.write(input);
    //Serial.println(telNumber);
    //String nomer = telNumber;
    Serial3.println("ATD" + telNumber + ";");
    //                                                                                                 mySerial.println("ATD" + telNumber + ";"); //test phone 0895947520
    mainMenuNumber = 11;
    dialingNumber();
    zakusnenie();
  }
  toMainMenu();
}
void endCall(){
//---------------------------------------------------------------------------------- end call
  if(((tp_x > 1) && (tp_x < 479)) && ((tp_y > 740) && (tp_y < 785))){
    colorTextWhite();
    myGLCD.fillRect(1, 740, 479, 785);
    colorBlack();
    colorTextBackWhite();;
    myGLCD.print("C A N C E L", CENTER, 755);
    Serial3.print("ATH");
    //                                                                                                            mySerial.println("ATH"); //end the call.
    mainMenuNumber = 1;
    zakusnenie();
    gsm();
  }
}

