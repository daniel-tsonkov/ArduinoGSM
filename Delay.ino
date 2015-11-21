void zakusnenie(){
  DateTime now = rtc.now(); //==============DS1307
  if(beepSound == 1){
    digitalWrite(zumerPin, HIGH);
  }
  if(vibratorOnOff == 1){
    digitalWrite(vibratorPin, HIGH);
  }
  delay (100);
  digitalWrite(zumerPin, LOW);
  digitalWrite(vibratorPin, LOW);
  switch (autoLock) {
     case 1://---------------------------------------------------------------------------------- lock after 5 sec
        if(now.second() > 55){
          lockScreenS = ((now.second() + 5) - 60);
        }else{
          lockScreenS = now.second() + 5;
        }
        lockScreenM = 100;
        break;
     case 2://---------------------------------------------------------------------------------- lock after 10 sec
        if(now.second() > 50){
          lockScreenS = ((now.second() + 10) - 60);
        }else{
          lockScreenS = now.second() + 10;
        }
        lockScreenM = 100;
        break;
     case 3://---------------------------------------------------------------------------------- lock after 20 sec
        if(now.second() > 40){
          lockScreenS = ((now.second() + 20) - 60);
        }else{
          lockScreenS = now.second() + 20;
        }
        lockScreenM = 100;
        break;
     case 4://---------------------------------------------------------------------------------- lock after 30 sec
        if(now.second() > 30){
          lockScreenS = ((now.second() + 30) - 60);
        }else{
          lockScreenS = now.second() + 30;
        }
        lockScreenM = 100;
        break;
     case 5://---------------------------------------------------------------------------------- lock after 1 min
        lockScreenS = 100;
        if(now.minute() > 58){
          lockScreenM = 0;
        }else{
          lockScreenM = now.minute() + 1;
        }
        break;
     case 6://---------------------------------------------------------------------------------- lock after 30 min
        lockScreenS = 100;
        if(now.minute() > 30){
          lockScreenM = ((now.minute() + 30) - 60);
        }else{
          lockScreenM = now.minute() + 30;
        }
        break;
  }
  /*Serial.println("========================");
  Serial.println(lockScreenS);
  Serial.println(now.second());
  Serial.println(lockScreenM);
  Serial.println(now.minute());
  Serial.println("========================");*/
  delay(100);
}
