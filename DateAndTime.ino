void dateAndTime(){
  myGLCD.clrScr();
  menuClock();
  
  setYear = year;
  setMonth = month;
  setDay = day;
  setHour = hour;
  setMinutes = minute;
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("Date and time", CENTER, 30);
  
  myGLCD.setFont(SmallFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("Year:   Moth:   Day:", CENTER, 50);
  colorTextWhite();
  myGLCD.drawRoundRect(160, 70, 200, 95);
  myGLCD.printNumI(setYear, 166, 76);
  myGLCD.drawRoundRect(220, 70, 260, 95);
  myGLCD.printNumI(setMonth, 234, 76);
  myGLCD.drawRoundRect(280, 70, 320, 95);
  myGLCD.printNumI(setDay, 295, 76);
  
  myGLCD.setFont(SmallFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print(" Hour:  Minutes:", CENTER, 110);
  colorTextWhite();
  myGLCD.drawRoundRect(175, 130, 225, 155);
  myGLCD.printNumI(setHour, 195, 136);
  myGLCD.drawRoundRect(245, 130, 295, 155);
  myGLCD.printNumI(setMinutes, 265, 136);
  
  color150150150();
  myGLCD.fillRoundRect(1, 620, 479, 665);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("U P", CENTER, 635);
  
  color150150150();
  myGLCD.fillRoundRect(1, 680, 479, 725);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("D O W N", CENTER, 695);
  
  backButton();
}
void setingsClock(){
  if((tp_x > 160) && (tp_x < 200) && (tp_y > 70) && (tp_y < 95)){ //-------160, 70, 200, 95
    choiceClock = 1;
    myGLCD.setColor(255, 174, 0);
    myGLCD.fillRoundRect(161, 71, 199, 94);
    colorBlack();
    myGLCD.fillRoundRect(221, 71, 259, 94);
    myGLCD.fillRoundRect(281, 71, 319, 94);
    myGLCD.fillRoundRect(176, 131, 224, 154);
    myGLCD.fillRoundRect(266, 131, 294, 154);
    myGLCD.setFont(SmallFont);
    myGLCD.setBackColor(255, 174, 0);
    colorTextWhite();
    myGLCD.printNumI(setYear, 166, 76);
    colorTextBackBlack();
    myGLCD.printNumI(setMonth, 236, 76);
    myGLCD.printNumI(setDay, 296, 76);
    myGLCD.printNumI(setHour, 196, 136);
    myGLCD.printNumI(setMinutes, 266, 136);
    zakusnenie();
  }
  if((tp_x > 220) && (tp_x < 260) && (tp_y > 70) && (tp_y < 95)){ //--------220, 70, 260, 95
    choiceClock = 2;
    myGLCD.setColor(255, 174, 0);
    myGLCD.fillRoundRect(221, 71, 259, 94);//M
    colorBlack();
    myGLCD.fillRoundRect(161, 71, 199, 94);//Y
    myGLCD.fillRoundRect(281, 71, 319, 94);//D
    myGLCD.fillRoundRect(176, 131, 224, 154);//H
    myGLCD.fillRoundRect(246, 131, 294, 154);//M
    myGLCD.setFont(SmallFont);
    myGLCD.setBackColor(255, 174, 0);
    colorTextWhite();
    myGLCD.printNumI(setMonth, 236, 76);
    colorTextBackBlack();
    myGLCD.printNumI(setYear, 166, 76);
    myGLCD.printNumI(setDay, 296, 76);
    myGLCD.printNumI(setHour, 196, 136);
    myGLCD.printNumI(setMinutes, 266, 136);
    zakusnenie();
  }
  if((tp_x > 280) && (tp_x < 320) && (tp_y > 70) && (tp_y < 95)){ //-------280, 70, 320, 95
    choiceClock = 3;
    myGLCD.setColor(255, 174, 0);
    myGLCD.fillRoundRect(281, 71, 319, 94);//D
    colorBlack();
    myGLCD.fillRoundRect(161, 71, 199, 94);//Y
    myGLCD.fillRoundRect(221, 71, 259, 94);//M
    myGLCD.fillRoundRect(176, 131, 224, 154);//H
    myGLCD.fillRoundRect(246, 131, 294, 154);//M
    myGLCD.setFont(SmallFont);
    myGLCD.setBackColor(255, 174, 0);
    colorTextWhite();
    myGLCD.printNumI(setDay, 296, 76);
    colorTextBackBlack();
    myGLCD.printNumI(setYear, 166, 76);
    myGLCD.printNumI(setMonth, 236, 76);
    myGLCD.printNumI(setHour, 196, 136);
    myGLCD.printNumI(setMinutes, 266, 136);
    zakusnenie();
  }
  if((tp_x > 175) && (tp_x < 225) && (tp_y > 130) && (tp_y < 155)){ //-------175, 130, 225, 155
    choiceClock = 4;
    myGLCD.setColor(255, 174, 0);
    myGLCD.fillRoundRect(176, 131, 224, 154);//H
    colorBlack();
    myGLCD.fillRoundRect(161, 71, 199, 94);//Y
    myGLCD.fillRoundRect(221, 71, 259, 94);//M
    myGLCD.fillRoundRect(281, 71, 319, 94);//D
    myGLCD.fillRoundRect(246, 131, 294, 154);//M
    myGLCD.setFont(SmallFont);
    myGLCD.setBackColor(255, 174, 0);
    colorTextWhite();
    myGLCD.printNumI(setHour, 196, 136);
    colorTextBackBlack();
    myGLCD.printNumI(setYear, 166, 76);
    myGLCD.printNumI(setMonth, 236, 76);
    myGLCD.printNumI(setDay, 296, 76);
    myGLCD.printNumI(setMinutes, 266, 136);
    zakusnenie();
  }
  if((tp_x > 245) && (tp_x < 295) && (tp_y > 130) && (tp_y < 155)){ //------245, 130, 295, 155
    choiceClock = 5;
    myGLCD.setColor(255, 174, 0);
    myGLCD.fillRoundRect(246, 131, 294, 154);//M
    colorBlack();
    myGLCD.fillRoundRect(161, 71, 199, 94);//Y
    myGLCD.fillRoundRect(221, 71, 259, 94);//M
    myGLCD.fillRoundRect(281, 71, 319, 94);//D
    myGLCD.fillRoundRect(176, 131, 224, 154);//H
    myGLCD.setFont(SmallFont);
    myGLCD.setBackColor(255, 174, 0);
    colorTextWhite();
    myGLCD.printNumI(setMinutes, 266, 136);
    colorTextBackBlack();
    myGLCD.printNumI(setYear, 166, 76);
    myGLCD.printNumI(setMonth, 236, 76);
    myGLCD.printNumI(setDay, 296, 76);
    myGLCD.printNumI(setHour, 196, 136);
    zakusnenie();
  }
  if((tp_y > 620) && (tp_y < 665)){ //-------- 1, 620, 479, 665
    if(choiceClock == 1){//year UP
      setYear++;
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setYear, 166, 76);
    } 
    if(choiceClock == 2){//month UP
      setMonth++;
      if(setMonth == 13){
        myGLCD.setColor(255, 174, 0);
        myGLCD.fillRoundRect(221, 71, 259, 94);//M
        setMonth = 1;
      }
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setMonth, 236, 76);
    }
    if(choiceClock == 3){//day UP
      setDay++;
      if(setDay == 32){
        myGLCD.setColor(255, 174, 0);
        myGLCD.fillRoundRect(281, 71, 319, 94);//D
        setDay = 1;
      }
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setDay, 296, 76);
    }
    if(choiceClock == 4){//hour UP
      setHour++;
      if(setHour == 24){
        myGLCD.setColor(255, 174, 0);
        myGLCD.fillRoundRect(176, 131, 224, 154);//H
        setHour = 0;
      }
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setHour, 196, 136);
    }
    if(choiceClock == 5){//minutes UP
      setMinutes++;
      if(setMinutes == 60){
        myGLCD.setColor(255, 174, 0);
        myGLCD.fillRoundRect(246, 131, 294, 154);//M
        setMinutes = 0;
      }
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setMinutes, 266, 136);
    }
    zakusnenie();
  }
  if((tp_y > 680) && (tp_y < 725)){//year DOWN 1, 680, 479, 725
    if(choiceClock == 1){//year DOWN
      setYear--;
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setYear, 166, 76);
    } 
    if(choiceClock == 2){//month DOWN
      setMonth--;
      if(setMonth == 0){
        setMonth = 12;
      }
      myGLCD.setColor(255, 174, 0);
      myGLCD.fillRoundRect(221, 71, 259, 94);//M
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setMonth, 236, 76);
    }
    if(choiceClock == 3){//day DOWN
      setDay--;
      if(setDay == 0){
        setDay = 31;
      }
      myGLCD.setColor(255, 174, 0);
      myGLCD.fillRoundRect(281, 71, 319, 94);//D
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setDay, 296, 76);
    }
    if(choiceClock == 4){//hour DOWN
      setHour--;
      if(setHour == -1){
        setHour = 23;
      }
      myGLCD.setColor(255, 174, 0);
      myGLCD.fillRoundRect(176, 131, 224, 154);//H
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setHour, 196, 136);
    }
    if(choiceClock == 5){//minutes DOWN
      setMinutes--;
      if(setMinutes == -1){
        setMinutes = 59;
      }
      myGLCD.setColor(255, 174, 0);
      myGLCD.fillRoundRect(246, 131, 294, 154);//M
      myGLCD.setFont(SmallFont);
      colorTextWhite();
      myGLCD.setBackColor(255, 174, 0);
      myGLCD.printNumI(setMinutes, 266, 136);
    }
    zakusnenie();
  }
  toSettingsMenu();
}
