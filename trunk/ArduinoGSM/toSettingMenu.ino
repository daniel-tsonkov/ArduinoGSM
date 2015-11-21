void toSettingsMenu(){
  if((tp_y > 740) && (tp_y < 785)){//------------- from setting to setting menu
    if(choiceClock != 0){
      rtc.adjust(DateTime(setYear,setMonth,setDay,setHour,setMinutes));
    }
    myGLCD.setColor(80, 80, 80);
    myGLCD.fillRoundRect(1, 740, 479, 785);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(80, 80, 80);
    colorBlack();
    myGLCD.print("B a c k", CENTER, 755);
    mainMenuNumber = 7;
    choiceClock = 0;
    zakusnenie();
    set();
  }
}

/*if((tp_x > 1) && (tp_x < 479) && (tp_y > 740) && (tp_y < 785)){//------------- from display setting to setting menu
    myGLCD.setColor(80, 80, 80);
    myGLCD.fillRoundRect(1, 740, 479, 785);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(80, 80, 80);
    myGLCD.setColor(0, 0, 0);
    myGLCD.print("B a c k", CENTER, 755);
    mainMenuNumber = 7;
    zakusnenie();
    set();
  }*/
