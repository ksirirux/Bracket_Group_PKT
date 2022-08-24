/***************************
 *  Blink LED ep.1
 *  Prankratai Pittayakom
 *  date: 17/08/2022
 * 
 * การใช้ Function เพื่อกระพริบไฟ ในแบบต่างๆ
 ****************************/

#define LED_RED 9
#define LED_BLUE 10
#define LED_GREEN 11

#include <Arduino.h>
void blinkLED(int LED);
void redBlink();
void blinkLEDTime(int led,int timeOn,int timeOff);

void setup() { //เตรียมพร้อมระบบ
  Serial.begin(9600);
  pinMode(LED_RED,OUTPUT);
  pinMode(LED_BLUE,OUTPUT);
  pinMode(LED_GREEN,OUTPUT);
  Serial.println("TEST LED");
  delay(1000);
}

void loop() { // ทำงานต่อเนื่อง

  digitalWrite(LED_RED,HIGH);
  delay(1000);
  digitalWrite(LED_RED,LOW);
  delay(1000);
  
  
  //USE FUNCTION
  redBlink();

  blinkLED(LED_RED); 
  blinkLED(LED_BLUE); 
  blinkLED(LED_GREEN); 

  blinkLEDTime(LED_RED,200,300);
  blinkLEDTime(LED_BLUE,1000,300);
  blinkLEDTime(LED_GREEN,550,250);

}
//จะทำงานเฉพาะการกระพริบ หลอดไฟสีแดง เท่านั้น
void redBlink(){
  digitalWrite(LED_RED,HIGH);
  delay(500);
  digitalWrite(LED_RED,LOW);
  delay(500);
}
//ทำงานโดยการส่ง ตัวแปร คือหลอดLED ที่ต้องการให้กระพริบ เข้าไป 
void blinkLED(int led){
 
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
}
//ทำงานโดยการส่ง ตัวแปร คือหลอดLED ที่ต้องการให้กระพริบ
//และเวลาเปิด - ปิดเข้าไป
void blinkLEDTime(int led,int timeOn,int timeOff){
    digitalWrite(led,HIGH);
    delay(timeOn);
    digitalWrite(led,LOW);
    delay(timeOff);
}