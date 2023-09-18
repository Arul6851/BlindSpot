#include<cvzone.h>

SerialData serialData(2,1);
int valsRec[2];
const int MOTOR = 6;
void setup() {
  // put your setup code here, to run once
  serialData.begin();
  pinMode(MOTOR,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  serialData.Get(valsRec);
  if(valsRec[1]==1){
    digitalWrite(MOTOR,HIGH);
    tone(3,1000);
    delay(1000);
    noTone(3);
    delay(500);
   }
  else{
      digitalWrite(MOTOR,LOW);
      noTone(3);
    }
}
