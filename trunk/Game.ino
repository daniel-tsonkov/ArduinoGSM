void game(){
  myGLCD.clrScr();
  menuClock();

  int yA = 35;
  int yB = yA + 45;
  int charY = 50;
  
  myGLCD.setFont(BigFont);
  for(int i = 0; i <= 11; i++){
    if(gamesButtonsArray[i] == "")
      {
      }else{
        color150150150();
        myGLCD.fillRoundRect(1, yA, 478, yB);
        colorBlack();
        backColor150150150();
        myGLCD.print(gamesButtonsArray[i], CENTER, charY);
        yA += 60;
        yB += 60;
        charY += 60;
      }
  }

  backButton();
}
void playGames(){
  int yA = 35;
  int yB = yA + 45;
  int charY = 50;
  
  for(int i = 0; i <= 11; i++){
    if((tp_y > yA) && (tp_y < yB)){
        if(gamesButtonsArray[i] == ""){
        }else{
          switch (i + 1) {
            case 1://---------------------------------------------------------------------------------- from setting menu functions to Snake
            mainMenuNumber = 81;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            drawSnake();
            break;
            case 2://---------------------------------------------------------------------------------- from setting menu functions to Tetris
            mainMenuNumber = 82;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            drawTetris();
            break;
            case 3://---------------------------------------------------------------------------------- from setting menu functions to Cars
            mainMenuNumber = 83;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            drawCars();
            break;
            case 4://---------------------------------------------------------------------------------- from setting menu functions to Brick Breaker
            mainMenuNumber = 84;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            drawBrickBreaker();
            break;
            case 5://---------------------------------------------------------------------------------- from setting menu functions to Puzzle
            mainMenuNumber = 85;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            drawPuzzle();
            break;
            case 6://---------------------------------------------------------------------------------- from setting menu functions to IQ
            mainMenuNumber = 86;
            //myGLCD.setColor(100, 100, 100);
            //myGLCD.fillRect(1, yA, 478, yB);
            zakusnenie();
            drawiq();
            break;
            case 7://---------------------------------------------------------------------------------- blank
            break;
            case 8://---------------------------------------------------------------------------------- blank
            break;
            case 9://---------------------------------------------------------------------------------- blank
            break;
            case 10://---------------------------------------------------------------------------------- blank
            break;
            case 11://---------------------------------------------------------------------------------- blank
            break;
            case 12://---------------------------------------------------------------------------------- blank
            break;
          }
        }
      }
      yA += 60;
      yB += 60;
      charY += 60;
    }
  //--------------------------------------------------------------------------------- from game to main menu functions
  toMainMenu();
}
