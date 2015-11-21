void classesForPrograms(){
  
    if(mainMenuNumber == 999){//------------------------------------------------------------------------------------main menu
      mainMenuChoice();  
    }
    if(menuNumber == 1){
      if(mainMenuNumber == 1){//--------------------------------------------------------------------------------------GSM functions
        gsmFunctions();
      }
      if(mainMenuNumber == 10){//--------------------------------------------------------------------------------------GSM functions
        bookFunctions();
      }
      if(mainMenuNumber == 11){//-------------------------------------------------------------------------------------end call
        endCall();
      }
    }
    if(menuNumber == 2){
      if(mainMenuNumber == 2){//--------------------------------------------------------------------------------------SMS functions
        smsFunctions();
      }
      if(mainMenuNumber == 20){//--------------------------------------------------------------------------------------Book
        bookFunctions();
      }
      if(mainMenuNumber == 21){//--------------------------------------------------------------------------------------open SMS functions
        openSMSFunctions();
      }
      if(mainMenuNumber == 22){//--------------------------------------------------------------------------------------new SMS functions
        newSMSFunctions();
      }
    }
    if(menuNumber == 3){
      if(mainMenuNumber == 3){//--------------------------------------------------------------------------------------office menu
        ofiFunctions();
      }
      if(mainMenuNumber == 31){//--------------------------------------------------------------------------------------office menu
        newTxtFunctions();
      }
      if(mainMenuNumber == 32){//--------------------------------------------------------------------------------------office menu
        newSpreadFunctions();
      }
      if(mainMenuNumber == 33){//--------------------------------------------------------------------------------------office menu
        newPaintFunctions();
      }
      if(mainMenuNumber == 34){//--------------------------------------------------------------------------------------office menu
        openTxtFunctions();
      }
      if(mainMenuNumber == 35){//--------------------------------------------------------------------------------------office menu
        openSpreadFunctions();
      }
      if(mainMenuNumber == 36){//--------------------------------------------------------------------------------------office menu
        openPaintFunctions();
      }
    }
    if(menuNumber == 4){
      if(mainMenuNumber == 4){//--------------------------------------------------------------------------------------MP3 functions
        mp3Functions();
      }
    }
    if(menuNumber == 5){
      if(mainMenuNumber == 5){//--------------------------------------------------------------------------------------calculator functions
        calulatorFunctions();
      }
    }
    if(menuNumber == 6){
      if(mainMenuNumber == 6){//--------------------------------------------------------------------------------------GPS functions
        gpsFunctions();
      }
    }
    if(menuNumber == 7){
      if(mainMenuNumber == 7){//--------------------------------------------------------------------------------------setings menu
        setingMenu();
      }
      if(mainMenuNumber == 71){//-------------------------------------------------------------------------------------set alarm
        setingsAlarm();  
      }
      if(mainMenuNumber == 711){//------------------------------------------------------------------------------------stop alarm when ringing
        stopAlarmRinging();
      }
      if(mainMenuNumber == 72){//------------------------------------------------------------------------------------ set display fade
        setingsDisplayFade();
      }  
      if(mainMenuNumber == 73){//------------------------------------------------------------------------------------ set clock
        setingsClock();
      }
      if(mainMenuNumber == 74){//------------------------------------------------------------------------------------ set personal setings
        setingsPersonal();
      }
      if(mainMenuNumber == 75){//------------------------------------------------------------------------------------ set wi-fi setings
        wifiFunctions();
      }
      if(mainMenuNumber == 76){//------------------------------------------------------------------------------------ set ringtones setings
        ringtonesFunctions();
      }
    }
    if(menuNumber == 8){
      if(mainMenuNumber == 8){//--------------------------------------------------------------------------------------play games
        playGames();
      }
      if(mainMenuNumber == 81){//-------------------------------------------------------------------------------------Snake
        snake();
      }
      if(mainMenuNumber == 82){//-------------------------------------------------------------------------------------Tetris
        tetris();
      }
      if(mainMenuNumber == 83){//-------------------------------------------------------------------------------------Cars
        cars();
      }
      if(mainMenuNumber == 84){//-------------------------------------------------------------------------------------BrickKreaker
        brickBreaker();
      }
      if(mainMenuNumber == 85){//-------------------------------------------------------------------------------------Puzzle
        puzzleFunctions();
      }
      if(mainMenuNumber == 86){//-------------------------------------------------------------------------------------IQ
        iqFunctions();
      }
    }
    if(menuNumber == 9){
      if(mainMenuNumber == 9){//--------------------------------------------------------------------------------------play games
        webFunctions();
      }
    }
    if(menuNumber == 100){
        if(mainMenuNumber == 100){//--------------------------------------------------------------------------------------Radio menu
          radioFunction();
        }
    }
    if(menuNumber == 11){
        if(mainMenuNumber == 11){//--------------------------------------------------------------------------------------Radio menu
          IRRFunctions();
        }
    }
    
    if(menuNumber == 12){
      if(mainMenuNumber == 12){//--------------------------------------------------------------------------------------File Manager menu
        FMFunctions();
      }
    }
  }
