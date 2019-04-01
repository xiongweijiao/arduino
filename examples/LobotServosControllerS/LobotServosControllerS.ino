#include <LobotServoControllerS.h>

#define rxPin 10
#define txPin 11

SoftwareSerial mySerial(rxPin, txPin);
LobotServoController myse(mySerial);

void setup() {
  pinMode(13,OUTPUT);
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);

  mySerial.begin(9600);
  Serial.begin(9600);
  mySerial;
  while(!Serial);
  digitalWrite(13,HIGH);
}

void loop() {
// myse.moveServo(2,90,1000); //2号舵机1000ms移动至90度位置
//  delay(1000);
//  myse.moveServo(2,120,1000); //2号舵机1000ms移动至90度位置
//  delay(1000);
//myse.moveServos(2,1000,4,60,5,30);  //控制2个舵机，移动时间1000ms，4号舵机至60度位置，5号舵机至30度位置
//  delay(1000);
//  myse.moveServos(2,1000,4,120,5,150);  //控制2个舵机，移动时间1000ms，4号舵机至60度位置，5号舵机至30度位置
//    delay(1000);
////  LobotServo servos[2];   //舵机ID位置结构数组
////  servos[0].ID = 2;       //2号舵机
////  servos[0].Position = 120;  //120度位置
////  servos[1].ID = 4;       //4号舵机
////  servos[1].Position = 80;  /80度位置
////  myse.moveServos(servos,2,1000);  //控制两个舵机，移动时间1000ms,ID和位置有servos指定
int a=getNumber();
}
