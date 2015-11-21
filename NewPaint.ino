void newPaint(){
  myGLCD.clrScr();
  menuClock();
  
  colorTextWhite();
  myGLCD.fillRect(1, 21, 480, 740);
  
  int painColorRed = 0;
  int painColorGreen = 0;
  int painColorBlue = 0;
  //byte tempRed = 255;
  //int greenProgress = 2;
  
  //for(int j = 1; j <= 256; j++){
    //painColorRed = 255;
    //painColorGreen = -2;
    //painColorBlue = 0;
    //tempRed -= tempRed / 255;
    //for(int i = 1; i <= 256; i++){
        /*if(i <= 64){
          painColorRed -= 1;
          if(painColorRed < 55){
            painColorRed = 55;
          }
        }
        if(i > 64){
          tempRed -= 3;
          painColorRed -= ((tempRed) - 55) / 200;
          
        }*/
        //painColorRed -= tempRed;
        /*if(i >= 129){
          if(painColorGreen > 2){
            painColorGreen -= 2;
          }
        }else{
          painColorGreen += 2;
        }*/
        /*if(i + j >= 192){
          painColorBlue += 4;
          //if(painColorBlue >= 0){
            if(painColorBlue > 255){
              painColorBlue = 255;
            }
          }else{
            painColorBlue = 0;
          }
        }*/
        //myGLCD.setColor(painColorRed, 0, 0);
        //myGLCD.drawPixel(j, i);
    //}
    //painColorRed = 255 - j;
    //painColorGreen = 255 - j;
    //painColorBlue = 0;
  //}
  int yA = 23;
  int yB = yA + 44;
  colorBlack();
  myGLCD.drawRect(2, yA, 44, yB);
  for(int i = 0; i <= 14; i++){
        painColorRed += 17;
        painColorGreen += 17;
        painColorBlue += 17;
        myGLCD.setColor(painColorRed, painColorGreen, painColorBlue);
        myGLCD.fillRect(2, yA + 1, 44, yB - 1);
        yA += 45;
        yB += 45;
  }
  colorBlack();
  myGLCD.drawRect(48, 23, 478, 645);
  myGLCD.drawRect(48, 650, 146, 735);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(255, 255, 255);
  myGLCD.print("Clear", 55, 685);
  myGLCD.fillRect(380, 650, 478, 735);
  
  backButton();
  
}

void newPaintFunctions(){
   int painColorRed = 0;
   int painColorGreen = 0;
   int painColorBlue = 0;
   if (myTouch.dataAvailable()){
    if(tp_x > 51 && tp_x < 475 && tp_y > 25 && tp_y < 642){
      myGLCD.fillCircle(tp_x, tp_y, 5);
    }
    if(tp_x > 1 && tp_x < 45 && tp_y > 23 && tp_y < 750){
      int yA = 23;
      int yB = 45;
      
      for(int i = 0; i <= 14; i++){
        painColorRed += 17;
        painColorGreen += 17;
        painColorBlue += 17;
        if(((tp_x > 1) && (tp_x < 45)) && ((tp_y > yA) && (tp_y < yB))){
          myGLCD.setColor(painColorRed, painColorGreen, painColorBlue);
          myGLCD.fillRect(380, 650, 478, 738);
        }
        yA += 45;
        yB += 45;
      }
    }
    if(((tp_x > 48) && (tp_x < 146)) && ((tp_y > 650) && (tp_y < 738))){
      colorTextWhite();
      myGLCD.fillRect(49, 24, 477, 644);
      myGLCD.setColor(painColorRed, painColorGreen, painColorBlue);
    }
    if (myTouch.dataAvailable()){
      toOfficeMenu();
    }
  }
}
