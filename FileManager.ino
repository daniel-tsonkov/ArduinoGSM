void fileMan(){
  
  int yPosition = 100;
  byte xPosition = 20;

  int nMyChar = 0;
  boolean writeChar = false;
  String cifri = "";
  
  myGLCD.clrScr(); 
  menuClock();
  
  myGLCD.setFont(BigFont);
  colorTextBackBlack();
  colorTextWhite();
  myGLCD.print("File manager", CENTER, 50);
  
  printDirectory(root);//display sd card consist
  
  backButton();
  
  //for(int i = 0; i < sizeof(fileName) - 1; i++){ 
  //  Serial.println(fileName[i]);
  //}
}

void printDirectory(File dir) {
   while(true) {
     
     File entry =  dir.openNextFile();
     if (! entry) {
       // no more files
       break;
     }
     Serial.print(entry.name());
     if (entry.isDirectory()) {
       Serial.println("/");
       printDirectory(entry);
     }
     Serial.println();
     //fileName[indexFileName] = entry.name() + ' ';
     //indexFileName++;
     entry.close();
   }
}

void FMFunctions(){
  toMainMenu();
}
