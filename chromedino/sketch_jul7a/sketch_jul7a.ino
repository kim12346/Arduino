#include <Servo.h>
Servo myservo;

int sensorPin = A0;
int sensorValue = 0;
int val;

void setup(){
  myservo.attach(2);
  Serial.begin(9600);
  myservo.write(80);
}
void loop(){
  sensorValue = (analogRead(sensorPin));
  if(sensorValue<300){
    myservo.write(100);
  }
  else{
    myservo.write(80);
    delay(1000);
  }
  Serial.println(sensorValue);  
}