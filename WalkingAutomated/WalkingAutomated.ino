#include <Servo.h>
Servo servo;
// motor one
int enA = 5;    //Right motor
int MotorAip1=2;
int MotorAip2=3;
// motor two
int enB = 6;    //Left motor
int MotorBip1=4;
int MotorBip2=7;
int trig = 10;
int echo = 12;
int state =0;

void setup() {
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(MotorAip1,OUTPUT);
  pinMode(MotorAip2,OUTPUT);
  pinMode(MotorBip1,OUTPUT);
  pinMode(MotorBip2,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  servo.attach(11);
  servo.write(0);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(trig , LOW);
  delayMicroseconds(5);
  digitalWrite(trig , HIGH);
  delayMicroseconds(5);
  digitalWrite(trig , LOW);
  float duration = pulseIn(echo , HIGH);
  float distance = duration / 29 / 2;
Serial.println(distance);
  if(distance < 30&&state==0){
    servo.write(90);
    state = 1;
  }

  if(distance < 30&&state==1){
    servo.write(0);
    state = 2;
  }
  else if(distance <30&&state==2 ){
    servo.write(180);
    state = 0;
  }
}
