void cal(){
  calculatorFirstNumber = 0;
  calculatorSecondNumber = 0;
  calculatorResult = 0;
  calculatorOperation = 0;
  calculatorDigits = 0;
       
  myGLCD.clrScr();
  menuClock();
  colorTextWhite();
  myGLCD.drawRect(1, 24, 478, 105);

  myGLCD.setFont(SevenSegNumFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("0", 20, 43);
  
  myGLCD.setColor(255, 120, 120);
  myGLCD.fillRect(247, 197, 425, 247);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(255, 120, 120);
  colorBlack();
  myGLCD.print("C", 330, 215);
  
  int xA = 55;
  int yA = 257;
  int xB = xA + 85;
  int yB = yA + 85;
  int charX = 80;
  int charY = 275;
  
  myGLCD.setBackColor(50, 50, 50);
  myGLCD.setColor(50, 50, 50);
  for(int i = 0; i <= 15; i++){
    if(xB > 440){
      xA = 55;
      xB = xA + 85;
      yA = yB + 10;
      yB = yA + 85;
      charX = 85;
      charY += 95;
    }
    myGLCD.setColor(50, 50, 50); 
    myGLCD.fillRect(xA, yA, xB, yB);
    if((i == 3) || (i == 7) || (i == 11) || (i == 13) || (i == 14) || (i == 15)){
      myGLCD.setFont(BigFont);
    }else{
      myGLCD.setFont(SevenSegNumFont);
    }
    colorTextWhite();
    myGLCD.print(calculatorArray[i], charX, charY);
    xA += 95;
    xB += 95;
    charX += 95;
  }
  backButton();
}
void drawCalculatorNumber(){
  calculatorDigits++;
  if(calculatorDigits == 1){
    calculatorResult = calculatorFirstNumber;
    colorBlack();
    myGLCD.fillRect(3, 25, 476, 103);
    myGLCD.setFont(SevenSegNumFont);
    colorTextBackBlack();
    colorTextWhite();
    myGLCD.printNumI(calculatorResult, 20, 43);
  }
  if((calculatorDigits > 1) && (calculatorDigits <= 10)){
    calculatorResult = (calculatorResult * 10) + calculatorFirstNumber;
    colorBlack();
    myGLCD.fillRect(3, 25, 476, 103);
    myGLCD.setFont(SevenSegNumFont);
    colorTextBackBlack();
    colorTextWhite();
    myGLCD.printNumI(calculatorResult, 20, 43);
  }
  zakusnenie();
}
void calculatorDigitAfterOperation(String action){
   myGLCD.setFont(BigFont);
   colorTextBackBlack();
   colorTextWhite();
   myGLCD.print(action, 450, 38);
   zakusnenie();
}
 //----------------------------------------------------------------------------------- from calculator to main menu functions(calculator functions)  247, 197, 425, 247
void calulatorFunctions(){
  if (myTouch.dataAvailable()){
  if(((tp_x > 247) && (tp_x < 425)) && ((tp_y > 197) && (tp_y < 247))){//-------- C
    calculatorFirstNumber = 0;
    calculatorSecondNumber = 0;
    calculatorResult = 0;
    calculatorOperation = 0;
    calculatorDigits = 0;
    colorBlack();
    myGLCD.fillRect(3, 25, 476, 103);
    myGLCD.setFont(SevenSegNumFont);
    colorTextBackBlack();
    colorTextWhite();
    myGLCD.printNumI(0, 20, 43);
    zakusnenie();
  }
  
  int xA = 55;
  int yA = 257;
  int xB = xA + 85;
  int yB = yA + 85;
  int charX = 80;
  int charY = 275;
  
  myGLCD.setBackColor(50, 50, 50);
  myGLCD.setColor(50, 50, 50);
  for(int i = 0; i <= 15; i++){
    if(xB > 440){
      xA = 55;
      xB = xA + 85;
      yA = yB + 10;
      yB = yA + 85;
      charX = 85;
      charY += 95;
    }
    if(((tp_x > xA) && (tp_x < xB)) && ((tp_y > yA) && (tp_y < yB))){
        switch (i + 1) {
          case 1://---------------------------------------------------------------------------------- 1
          calculatorFirstNumber = 1;
          calculatorFirstNumberf = 0.1;
          drawCalculatorNumber();
          break;
          case 2://---------------------------------------------------------------------------------- 2
          calculatorFirstNumber = 2;
          calculatorFirstNumberf = 0.2;
          drawCalculatorNumber();
          break;
          case 3://---------------------------------------------------------------------------------- 3
          calculatorFirstNumber = 3;
          calculatorFirstNumberf = 0.3;
          drawCalculatorNumber();
          break;
          case 4://---------------------------------------------------------------------------------- /
          calculatorOperation = 2;
          calculatorSecondNumber = calculatorResult;
          calculatorDigits = 0;
          calculatorFirstNumber = 0;
          calculatorDigitAfterOperation("/");
          break;
          case 5://---------------------------------------------------------------------------------- 4
          calculatorFirstNumber = 4;
          calculatorFirstNumberf = 0.4;
          drawCalculatorNumber();
          break;
          case 6://---------------------------------------------------------------------------------- 5
          calculatorFirstNumber = 5;
          calculatorFirstNumberf = 0.5;
          drawCalculatorNumber();
          break;
          case 7://---------------------------------------------------------------------------------- 6
          calculatorFirstNumber = 6;
          calculatorFirstNumberf = 0.6;
          drawCalculatorNumber();
          break;
          case 8://---------------------------------------------------------------------------------- *
          calculatorOperation = 1;
          calculatorSecondNumber = calculatorResult;
          calculatorDigits = 0;
          calculatorFirstNumber = 0;
          calculatorDigitAfterOperation("*");
          break;
          case 9://---------------------------------------------------------------------------------- 7
          calculatorFirstNumber = 7;
          calculatorFirstNumberf = 0.7;
          drawCalculatorNumber();
          break;
          case 10://--------------------------------------------------------------------------------- 8
          calculatorFirstNumber = 8;
          calculatorFirstNumberf = 0.8;
          drawCalculatorNumber();
          break;
          case 11://--------------------------------------------------------------------------------- 9
          calculatorFirstNumber = 9;
          calculatorFirstNumberf = 0.9;
          drawCalculatorNumber();
          break;
          case 12://--------------------------------------------------------------------------------- -
          calculatorOperation = 4;
          calculatorSecondNumber = calculatorResult;
          calculatorDigits = 0;
          calculatorFirstNumber = 0;
          calculatorDigitAfterOperation("-");
          break;
          case 13://---------------------------------------------------------------------------------- 0
          calculatorFirstNumber = 0;
          drawCalculatorNumber();
          break;
          case 14://---------------------------------------------------------------------------------- .
          //calculatorResult = calculatorResult + calculatorFirstNumberf;
          break;
          case 15://---------------------------------------------------------------------------------- =
          switch (calculatorOperation) {
            case 1:    // your hand is on the sensor
              calculatorSecondNumber *= calculatorResult;
              break;
            case 2:    // your hand is close to the sensor
              calculatorSecondNumber /= calculatorResult;
              break;
            case 3:    // your hand is a few inches from the sensor
              calculatorSecondNumber += calculatorResult;
              break;
            case 4:    // your hand is nowhere near the sensor
              calculatorSecondNumber -= calculatorResult;
              break;
          }
          calculatorResult = calculatorSecondNumber;
          colorBlack();
          myGLCD.fillRect(3, 25, 476, 103);
          myGLCD.setFont(SevenSegNumFont);
          colorTextBackBlack();
          colorTextWhite();
          myGLCD.printNumI(calculatorSecondNumber, 20, 43);
          zakusnenie();
          break;
          case 16://---------------------------------------------------------------------------------- +
          calculatorOperation = 3;
          calculatorSecondNumber = calculatorResult;
          calculatorDigits = 0;
          calculatorFirstNumber = 0;
          calculatorDigitAfterOperation("+");
          break;
        }
      }
    xA += 95;
    xB += 95;
    charX += 95;
  }
  toMainMenu();
  }
}
