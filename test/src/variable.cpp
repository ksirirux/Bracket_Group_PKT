
#define LED_RED 5
#define LED_BLUE 6
#include <Arduino.h>

int num1 = 1000;
int num2 = 0;

void setup(){
    pinMode(LED_RED,OUTPUT);
    pinMode(LED_BLUE,OUTPUT);
    // ใช้ Serial Port เพื่อแสดงค่า หรือข้อมูลที่เราต้องการตรวจสอบ
    Serial.begin(9600); // กำหนดความเร็วสื่อสารที่จะเชื่อมต่อ
    Serial.print("Test Variable "); // แสดงข้อความออกทาง Serial Port 
    Serial.println(" Show message enter new line");
    
    Serial.println(num1); // Quit 1. ค่าที่แสดงออกมาคือ 
    num1+10 ; 
    Serial.println(num1); // Quit 2. ค่าที่แสดงออกมาคือ
    num1= num1+10;
    Serial.println(num1); // Quit 3. ค่าที่แสดงออกมาคือ
    
}

void loop(){
    num2= num2+10;
    Serial.println(num2); // Quit 4. ค่าที่แสดงออก หลังจาก Loop ผ่านไป 10 รอบคือ
    num1= num1-50;
    Serial.println(num1); // Quit 5. ค่าที่แสดงออก หลังจาก Loop ผ่านไป 10 รอบคือ

    //Quit 6. อธิบายลักษณะการกระพริบไฟ LED ของ แดงและน้ำเงิน มีความต่างกันอย่างไร
    blinkLEDTime(LED_RED,num1,500); 
    blinkLEDTime(LED_BLUE,num2,500);
}


void blinkLEDTime(int led, int timeOn,int timeOff){
    digitalWrite(led,HIGH);
    delay(timeOn);
    digitalWrite(led,LOW);
    delay(timeOff);
}