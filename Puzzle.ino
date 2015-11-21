void drawPuzzle(){
  myGLCD.clrScr();
  menuClock();
  newGame();
  
  color150150150();
  myGLCD.fillRoundRect(1, 690, 479, 735);
  myGLCD.setFont(BigFont);
  backColor150150150();
  colorBlack();
  myGLCD.print("New game", CENTER, 705);
  
  backButton();
}
void puzzleFunctions(){ //main function
  if(myTouch.dataAvailable()){ 
    moveSquare();
  }
  
  if((tp_y > 690) && (tp_y < 735)){
    myGLCD.setColor(80, 80, 80);
    myGLCD.fillRoundRect(1, 690, 479, 735);
    myGLCD.setFont(BigFont);
    myGLCD.setBackColor(80, 80, 80);
    colorBlack();
    myGLCD.print("New game", CENTER, 705);
    //drawPuzzle();
    colorBlack();
    myGLCD.fillRect(10, 130, 479, 600);
    newGame();
    zakusnenie();
    color150150150();
    myGLCD.fillRoundRect(1, 690, 479, 735);
    myGLCD.setFont(BigFont);
    backColor150150150();
    colorBlack();
    myGLCD.print("New game", CENTER, 705);
  }
  toGameMenu();
}

void newGame(){
 
  int randNumber;
  int tempNumber;
  
  for(int j = 0; j <= 21; j++){
    randNumber = random(0, 9);
    if(numberPuzel[randNumber] != 8){
      for(int k = 0; k <= 8; k++){
        if(numberPuzel[k] == 8){
          tempNumber = numberPuzel[k];
          numberPuzel[k] = numberPuzel[randNumber];
          numberPuzel[randNumber] = tempNumber;
        }
      }
    }
  }
  drawGameSquares(); 
}
void drawGameSquares(){
  int xA = 10;
  int yA = 130;
  int xB = xA + 150;
  int yB = yA + 150;
  int charX = 55;
  int charY = 150;
  
  myGLCD.setFont(SevenSeg_XXXL_Num);
  
  for(int i = 0; i <= 8; i++){
    if(xB > 480){
      xA = 10;
      xB = xA + 150;
      yA = yB + 3;
      yB = yA + 150;
      charX = 65;
      charY += 155;
    }
    if(numberPuzel[i] == 8){
    }else{
      myGLCD.setColor(100, 100, 100);
      myGLCD.fillRect(xA, yA, xB, yB);
      colorTextWhite();
      myGLCD.setBackColor(100, 100, 100);
      myGLCD.printNumI(numberPuzel[i], charX, charY);
    }
    xA += 153;
    xB += 153;
    charX += 150;
  }
}
void moveSquare(){
  int xA = 10;
  int yA = 130;
  int xB = xA + 150;
  int yB = yA + 150;
  
  for(int i = 0; i <= 8; i++){
    if(xB > 480){
      xA = 10;
      xB = xA + 150;
      yA = yB + 3;
      yB = yA + 150;
    } 
        
    if((tp_x > xA) && (tp_x < xB) && (tp_y > yA) && (tp_y < yB)){
      if(numberPuzel[i] == 8){
      }else{
        switch (i) {
          case 0:
          if(numberPuzel[1] == 8){
            tempNumber = numberPuzel[1];
            numberPuzel[1] = numberPuzel[0];
            numberPuzel[0] = tempNumber;
          }
          if(numberPuzel[3] == 8){
            tempNumber = numberPuzel[3];
            numberPuzel[3] = numberPuzel[0];
            numberPuzel[0] = tempNumber;
          }
          colorBlack();
          myGLCD.fillRect(xA, yA, xB, yB);
          drawGameSquares();
          zakusnenie();
          break;
          case 1:
          if(numberPuzel[0] == 8){
            tempNumber = numberPuzel[0];
            numberPuzel[0] = numberPuzel[1];
            numberPuzel[1] = tempNumber;
          }
          if(numberPuzel[2] == 8){
            tempNumber = numberPuzel[2];
            numberPuzel[2] = numberPuzel[1];
            numberPuzel[1] = tempNumber;
          }
          if(numberPuzel[4] == 8){
            tempNumber = numberPuzel[4];
            numberPuzel[4] = numberPuzel[1];
            numberPuzel[1] = tempNumber;
          }
          colorBlack();
          myGLCD.fillRect(xA, yA, xB, yB);
          drawGameSquares();
          zakusnenie();
          break;
          case 2:
          if(numberPuzel[1] == 8){
            tempNumber = numberPuzel[1];
            numberPuzel[1] = numberPuzel[2];
            numberPuzel[2] = tempNumber;
          }
          if(numberPuzel[5] == 8){
            tempNumber = numberPuzel[5];
            numberPuzel[5] = numberPuzel[2];
            numberPuzel[2] = tempNumber;
          }
          colorBlack();
          myGLCD.fillRect(xA, yA, xB, yB);
          drawGameSquares();
          zakusnenie();
          break;
          case 3:
          if(numberPuzel[0] == 8){
            tempNumber = numberPuzel[0];
            numberPuzel[0] = numberPuzel[3];
            numberPuzel[3] = tempNumber;
          }
          if(numberPuzel[4] == 8){
            tempNumber = numberPuzel[4];
            numberPuzel[4] = numberPuzel[3];
            numberPuzel[3] = tempNumber;
          }
          if(numberPuzel[6] == 8){
            tempNumber = numberPuzel[6];
            numberPuzel[6] = numberPuzel[3];
            numberPuzel[3] = tempNumber;
          }
          colorBlack();
          myGLCD.fillRect(xA, yA, xB, yB);
          drawGameSquares();
          zakusnenie();
          break;
          case 4:
          if(numberPuzel[1] == 8){
            tempNumber = numberPuzel[1];
            numberPuzel[1] = numberPuzel[4];
            numberPuzel[4] = tempNumber;
          }
          if(numberPuzel[3] == 8){
            tempNumber = numberPuzel[3];
            numberPuzel[3] = numberPuzel[4];
            numberPuzel[4] = tempNumber;
          }
          if(numberPuzel[5] == 8){
            tempNumber = numberPuzel[5];
            numberPuzel[5] = numberPuzel[4];
            numberPuzel[4] = tempNumber;
          }
          if(numberPuzel[7] == 8){
            tempNumber = numberPuzel[7];
            numberPuzel[7] = numberPuzel[4];
            numberPuzel[4] = tempNumber;
          }
          colorBlack();
          myGLCD.fillRect(xA, yA, xB, yB);
          drawGameSquares();
          zakusnenie();
          break;
          case 5:
          if(numberPuzel[2] == 8){
            tempNumber = numberPuzel[2];
            numberPuzel[2] = numberPuzel[5];
            numberPuzel[5] = tempNumber;
          }
          if(numberPuzel[4] == 8){
            tempNumber = numberPuzel[4];
            numberPuzel[4] = numberPuzel[5];
            numberPuzel[5] = tempNumber;
          }
          if(numberPuzel[8] == 8){
            tempNumber = numberPuzel[8];
            numberPuzel[8] = numberPuzel[5];
            numberPuzel[5] = tempNumber;
          }
          colorBlack();
          myGLCD.fillRect(xA, yA, xB, yB);
          drawGameSquares();
          zakusnenie();
          break;
          case 6:
          if(numberPuzel[3] == 8){
            tempNumber = numberPuzel[3];
            numberPuzel[3] = numberPuzel[6];
            numberPuzel[6] = tempNumber;
          }
          if(numberPuzel[7] == 8){
            tempNumber = numberPuzel[7];
            numberPuzel[7] = numberPuzel[6];
            numberPuzel[6] = tempNumber;
          }
          colorBlack();
          myGLCD.fillRect(xA, yA, xB, yB);
          drawGameSquares();
          zakusnenie();
          break;
          case 7:
          if(numberPuzel[4] == 8){
            tempNumber = numberPuzel[4];
            numberPuzel[4] = numberPuzel[7];
            numberPuzel[7] = tempNumber;
          }
          if(numberPuzel[6] == 8){
            tempNumber = numberPuzel[6];
            numberPuzel[6] = numberPuzel[7];
            numberPuzel[7] = tempNumber;
          }
          if(numberPuzel[8] == 8){
            tempNumber = numberPuzel[8];
            numberPuzel[8] = numberPuzel[7];
            numberPuzel[7] = tempNumber;
          }
          colorBlack();
          myGLCD.fillRect(xA, yA, xB, yB);
          drawGameSquares();
          zakusnenie();
          break;
          case 8:
          if(numberPuzel[5] == 8){
            tempNumber = numberPuzel[5];
            numberPuzel[5] = numberPuzel[8];
            numberPuzel[8] = tempNumber;
          }
          if(numberPuzel[7] == 8){
            tempNumber = numberPuzel[7];
            numberPuzel[7] = numberPuzel[8];
            numberPuzel[8] = tempNumber;
          }
          colorBlack();
          myGLCD.fillRect(xA, yA, xB, yB);
          drawGameSquares();
          zakusnenie();
          break;
        }
      }
    }
    xA += 153;
    xB += 153;
  }
}
