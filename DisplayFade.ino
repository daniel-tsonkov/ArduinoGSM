void displayFade(){
  myGLCD.clrScr();
  menuClock();
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("Set display", CENTER, 30);
  
  color150150150();
  myGLCD.print("Display contrast", CENTER, 130);
  
  myGLCD.drawLine(10, 200, 470, 200);
  
  //myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("10 20 30 40 50 60 70 80 90", CENTER, 160);
  myGLCD.setColor(200, 200, 200);
  myGLCD.fillRoundRect(displayCursor, 185, displayCursor + 40, 215);
  
  color150150150();
  myGLCD.print("Display lock", CENTER, 260);
  
  //myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("5  10  20  30  1  30min", CENTER, 290);
  colorTextWhite();
  myGLCD.drawCircle(65, 325, 10);//5
  myGLCD.drawCircle(120, 325, 10);//10
  myGLCD.fillCircle(182, 325, 10);//20
  myGLCD.drawCircle(244, 325, 10);//30
  myGLCD.drawCircle(302, 325, 10);//1
  myGLCD.drawCircle(380, 325, 10);//30min
  
  backButton();
}
void cursorDisplayFade(){
  colorBlack();
  myGLCD.fillRect(0, 185, 479, 215);
  analogWrite(ledPin, ledPinFading);
  myGLCD.setColor(200, 200, 200);
  myGLCD.drawLine(10, 200, 470, 200);
  myGLCD.fillRoundRect(displayCursor, 185, displayCursor + 40, 215);
}
void setingsDisplayFade(){
  if (myTouch.dataAvailable()){
      if((tp_y > 185) && (tp_y < 215)){
        ledPinFading = tp_x / 1.8;
        displayCursor = tp_x - 20;
        cursorDisplayFade();
      }
  }
  if (myTouch.dataAvailable()){
   if((tp_x > 60) && (tp_x < 70) && (tp_y > 320) && (tp_y < 330)){ //display auto lock
      colorBlack();
      myGLCD.fillRect(55, 316, 390, 334);
      colorTextWhite();
      myGLCD.drawCircle(65, 325, 10);//5
      myGLCD.fillCircle(65, 325, 7);//5
      myGLCD.drawCircle(120, 325, 10);//10
      myGLCD.drawCircle(182, 325, 10);//20
      myGLCD.drawCircle(244, 325, 10);//30
      myGLCD.drawCircle(302, 325, 10);//1
      myGLCD.drawCircle(380, 325, 10);//30min
      autoLock = 1;
      zakusnenie(); 
   }
   if((tp_x > 115) && (tp_x < 125) && (tp_y > 320) && (tp_y < 330)){
      colorBlack();
      myGLCD.fillRect(55, 316, 390, 334);
      colorTextWhite();
      myGLCD.drawCircle(65, 325, 10);//5
      myGLCD.drawCircle(120, 325, 10);//10
      myGLCD.fillCircle(120, 325, 7);//10
      myGLCD.drawCircle(182, 325, 10);//20
      myGLCD.drawCircle(244, 325, 10);//30
      myGLCD.drawCircle(302, 325, 10);//1
      myGLCD.drawCircle(380, 325, 10);//30min
      autoLock = 2;
      zakusnenie(); 
   }
   if((tp_x > 177) && (tp_x < 187) && (tp_y > 320) && (tp_y < 330)){
      colorBlack();
      myGLCD.fillRect(55, 316, 390, 334);
      colorTextWhite();
      myGLCD.drawCircle(65, 325, 10);//5
      myGLCD.drawCircle(120, 325, 10);//10
      myGLCD.drawCircle(182, 325, 10);//20
      myGLCD.fillCircle(182, 325, 7);//20
      myGLCD.drawCircle(244, 325, 10);//30
      myGLCD.drawCircle(302, 325, 10);//1
      myGLCD.drawCircle(380, 325, 10);//30min
      autoLock = 3;
      zakusnenie(); 
   }
   if((tp_x > 239) && (tp_x < 249) && (tp_y > 320) && (tp_y < 330)){
      colorBlack();
      myGLCD.fillRect(55, 316, 390, 334);
      colorTextWhite();
      myGLCD.drawCircle(65, 325, 10);//5
      myGLCD.drawCircle(120, 325, 10);//10
      myGLCD.drawCircle(182, 325, 10);//20
      myGLCD.drawCircle(244, 325, 10);//30
      myGLCD.fillCircle(244, 325, 7);//30
      myGLCD.drawCircle(302, 325, 10);//1
      myGLCD.drawCircle(380, 325, 10);//30min
      autoLock = 4;
      zakusnenie(); 
   }
   if((tp_x > 297) && (tp_x < 307) && (tp_y > 317) && (tp_y < 330)){
      colorBlack();
      myGLCD.fillRect(55, 316, 390, 334);
      colorTextWhite();
      myGLCD.drawCircle(65, 325, 10);//5
      myGLCD.drawCircle(120, 325, 10);//10
      myGLCD.drawCircle(182, 325, 10);//20
      myGLCD.drawCircle(244, 325, 10);//30
      myGLCD.drawCircle(302, 325, 10);//1
      myGLCD.fillCircle(302, 325, 7);//1
      myGLCD.drawCircle(380, 325, 10);//30min
      autoLock = 5;
      zakusnenie(); 
   }
   if((tp_x > 375) && (tp_x < 385) && (tp_y > 320) && (tp_y < 330)){
      colorBlack();
      myGLCD.fillRect(55, 316, 390, 334);
      colorTextWhite();
      myGLCD.drawCircle(65, 325, 10);//5
      myGLCD.drawCircle(120, 325, 10);//10
      myGLCD.drawCircle(182, 325, 10);//20
      myGLCD.drawCircle(244, 325, 10);//30
      myGLCD.drawCircle(302, 325, 10);//1
      myGLCD.drawCircle(380, 325, 10);//30min
      myGLCD.fillCircle(380, 325, 7);//30min
      autoLock = 6;
      zakusnenie(); 
   }
  toSettingsMenu();
  }
}
