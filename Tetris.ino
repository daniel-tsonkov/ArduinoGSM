void drawTetris(){
  myGLCD.clrScr();
  menuClock();
  colorTextWhite();
  myGLCD.drawRect(1, 22, 238, 250);
  
  colorTextWhite();
  myGLCD.drawRect(6, 27, 109, 245); //150x216 real 108x216 
  myGLCD.setFont(SmallFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("Count: ", 166, 27);
  myGLCD.printNumI(gameCount, 215, 27);
  
  color150150150();
  myGLCD.fillRoundRect(65, 260, 175, 295);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(150, 150, 150);
  colorBlack();
  myGLCD.print("Rotate", CENTER, 270);
  
  color150150150();
  myGLCD.fillRoundRect(65, 305, 175, 340);
  //myGLCD.setFont(BigFont);
  //myGLCD.setBackColor(150, 150, 150);
  colorBlack();
  myGLCD.print("Down", CENTER, 315);
  
  color150150150();
  myGLCD.fillRoundRect(1, 260, 55, 340);
  myGLCD.setFont(BigFont);
  ////myGLCD.setBackColor(150, 150, 150);
  colorBlack();
  myGLCD.print("L", 20, 290);
  
  color150150150();
  myGLCD.fillRoundRect(185, 260, 239, 340);
  //myGLCD.setFont(BigFont);
  //myGLCD.setBackColor(150, 150, 150);
  colorBlack();
  myGLCD.print("R", 200, 290);

  backButton();
  
  xStartPlay = 10;
  yStartPlay = 10;
}
void tetris(){
   //myGLCD.setColor(255, 255, 255);
  //myGLCD.drawRect(1, 22, 238, 250);
  
  //myGLCD.setColor(255, 255, 255);
  //myGLCD.drawRect(6, 27, 156, 245); //150x216 real 108x216
  
  
  //int j = 0;   
                              
  /*if(gameSpeed == 1000){
    if(firstFigure == 0){
      randomColorRed = random(0, 255);
      randomColorGreen = random(0, 255);
      randomColorBlue = random(0, 255);
      
      typeFigure = random(0, 20);  
      if(typeFigure == 1){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = Z1[i][j];
          }
        }
      }
      if(typeFigure == 2){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = Z2[i][j];
          }
        }
      }
      if(typeFigure == 3){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = S1[i][j];
          }
        }
      }
      if(typeFigure == 4){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = S2[i][j];
          }
        }
      }
      if(typeFigure == 5){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = J1[i][j];
          }
        }
      }
      if(typeFigure == 6){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = J2[i][j];
          }
        }
      }
      if(typeFigure == 7){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = J3[i][j];
          }
        }
      }
      if(typeFigure == 8){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = J4[i][j];
          }
        }
      }
      if(typeFigure == 9){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = L1[i][j];
          }
        }
      }
      if(typeFigure == 10){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = L2[i][j];
          }
        }
      }
      if(typeFigure == 11){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = L3[i][j];
          }
        }
      }
      if(typeFigure == 12){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = L4[i][j];
          }
        }
      }
      if(typeFigure == 13){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = T1[i][j];
          }
        }
      }
      if(typeFigure == 14){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = T2[i][j];
          }
        }
      }
      if(typeFigure == 15){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = T3[i][j];
          }
        }
      }
      if(typeFigure == 16){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = T4[i][j];
          }
        }
      }
      if(typeFigure == 17){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = I1[i][j];
          }
        }
      }
      if(typeFigure == 18){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = I2[i][j];
          }
        }
      }
      if(typeFigure == 19){
        for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            gameField[i][j + 3] = O1[i][j];
          }
        }
      }
      for(startX = 0; startX < 20; startX++){
        for(startY = 0; startY< 10; startY++){
          if(gameField[startX][startY] == 1){
            myGLCD.setColor(randomColorRed, randomColorGreen, randomColorBlue);
            myGLCD.drawRect(xStartPlay * startY + 8, yStartPlay * startX + 19, xStartPlay * startY + 16, yStartPlay * startX + 27);
          }
        }
      }
      firstFigure = 0;
      gameSpeed = 0;
   }
  }*/
  
  
  
  
  
   if(gameSpeed == 1000){
     if(firstFigure == 1){
        //myGLCD.setFont(BigFont);
        //myGLCD.setBackColor(255, 255, 255);
        //myGLCD.setColor(0, 0, 0);
        //myGLCD.print("B a c k", CENTER, 260);
       /*for(int i = 18; i == 2; i--){
        for(int j = 9; j == 0; j--){
           if(gameField[i][j] + 1 != gameField[i + 1][j]){
             firstFigure = 0;
           }else{
             for(int i = 18; i == 1; i--){
                for(int j = 9; j == 0; j--){
                   if(gameField[i][j] != gameField[i + 1][j]){
                     (gameField[i][j] = gameField[i + 1][j]);
                   }else{
                     (gameField[i + 1][j] = gameField[i][j]);
                     (gameField[i][j] = gameField[i - 1][j]);
                     
                   }
                 }
                 
              }*/
              
              for(startX = 0; startX < 3; startX++){
                for(startY = 0; startY< 10; startY++){
                    myGLCD.setColor(0, 0, 0);
                    //myGLCD.fillRect(xStartPlay * startY + 8, yStartPlay * startX + 29 + posY, xStartPlay * startY + 16, yStartPlay * startX + 37 + posY);
                    //if(gameField[startX][startY] == 1){
                      //myGLCD.fillRect(xStartPlay * startY + 8, yStartPlay * startX + 19 + posY, xStartPlay * startY + 16, yStartPlay * startX + 27 + posY);
                    //}
                  /*if(gameField[startX][startY] == 1){
                    myGLCD.setColor(randomColorRed, randomColorGreen, randomColorBlue);
                    myGLCD.drawRect(xStartPlay * startY + 8, yStartPlay * startX + 19 + posY, xStartPlay * startY + 16, yStartPlay * startX + 27 + posY);
                    myGLCD.setColor(0, 0, 0);
                    myGLCD.fillRect(xStartPlay * startY + 8, yStartPlay * startX + 9 + posY, xStartPlay * startY + 16, yStartPlay * startX + 17 + posY);
                  }*/
                }
              }
              posY += 10;
           //}
        //}
     //}
     gameSpeed = 0;
   }
  
}
gameSpeed += 5;
   
   
   
   
   
             /*
             for(int i = 1 + xi; i = xi; i--){
               for(int j = 1 + yj; j = yj; j--){
                 gameField[i][j] = gameField[i][j - 1];
               }
             }
             for(int i = 0; i < 20; i++){
               for(int j = 0; j < 10; j++){
                 if(gameField[i][j] == 1){
                   myGLCD.drawRect(xStartPlay, yStartPlay, xStartPlay + 8, yStartPlay + 8);
                 }
                 xStartPlay += 10;
               }
               xStartPlay = 8;
               yStartPlay += 10;
               }
           }*/
     
     /*for(i = 0; i < 20; i++){
         for(j = 0; j < 10; j++){
           if(gameField[i][j] == 1){
             myGLCD.drawRect(xStartPlay, yStartPlay, xStartPlay + 8, yStartPlay + 8);
           }
           xStartPlay += 10;
         }
         xStartPlay = 8;
         yStartPlay += 10;
       }*/
     
     
     /*myGLCD.setColor(0, 0, 0);
     myGLCD.fillRect(180, 50, 220, 90);
     myGLCD.setColor(randomColorRed, randomColorGreen, randomColorBlue);
     if(typeFigure == 0){                   //kvadrat
       for(int i = 0; i < 4; i++){
         for(int j = 0; j < 4; j++){
           if(figPrevSquare[i][j] == 1){
             myGLCD.drawRect(xs, ys, xs + 8, ys + 8);
           }
           xs += 10;
         }
         xs = 180;
         ys += 10;
       }
       xs = 180;
       ys = 50;
       gameSpeed = 0;
     }
     if(typeFigure == 1){                   //liavo
       for(int i = 0; i < 4; i++){
         for(int j = 0; j < 4; j++){
           if(figPrevLeftSharp[i][j] == 1){
             myGLCD.drawRect(xs, ys, xs + 8, ys + 8);
           }
           xs += 10;
         }
         xs = 180;
         ys += 10;
       }
       xs = 180;
       ys = 50;
       gameSpeed = 0;
     }
     if(typeFigure == 2){                   //diasno
       for(int i = 0; i < 4; i++){
         for(int j = 0; j < 4; j++){
           if(figPrevRightSharp[i][j] == 1){
             myGLCD.drawRect(xs, ys, xs + 8, ys + 8);
           }
           xs += 10;
         }
         xs = 180;
         ys += 10;
       }
       xs = 180;
       ys = 50;
       gameSpeed = 0;
     }
     if(typeFigure == 3){                   //chup liavo
       for(int i = 0; i < 4; i++){
         for(int j = 0; j < 4; j++){
           if(figPrevLeftCurve[i][j] == 1){
             myGLCD.drawRect(xs, ys, xs + 8, ys + 8);
           }
           xs += 10;
         }
         xs = 180;
         ys += 10;
       }
       xs = 180;
       ys = 50;
       gameSpeed = 0;
     }
     if(typeFigure == 4){                   //chup diasno
       for(int i = 0; i < 4; i++){
         for(int j = 0; j < 4; j++){
           if(figPrevRightCurve[i][j] == 1){
             myGLCD.drawRect(xs, ys, xs + 8, ys + 8);
           }
           xs += 10;
         }
         xs = 180;
         ys += 10;
       }
       xs = 180;
       ys = 50;
       gameSpeed = 0;
     }
     if(typeFigure == 5){                   //dulgo
       for(int i = 0; i < 4; i++){
         for(int j = 0; j < 4; j++){
           if(figPrevStray[i][j] == 1){
             myGLCD.drawRect(xs, ys, xs + 8, ys + 8);
           }
           xs += 10;
         }
         xs = 180;
         ys += 10;
       }
       xs = 180;
       ys = 50;
       gameSpeed = 0;
     }*/
   toGameMenu();
}
