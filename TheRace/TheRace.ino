// motor one
int MotorAip1=2;
int MotorAip2=3;
// motor two
int MotorBip1=4;
int MotorBip2=7;
SoftwareSerial myserial(5,6)
void setup() {
  // put your setup code here, to run once:
  myserial.begin(9600);
  pinMode(MotorAip1,OUTPUT);
  pinMode(MotorAip2,OUTPUT);
  pinMode(MotorBip1,OUTPUT);
  pinMode(MotorBip2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(myserial.available()){
    char state = myserial.read();

    if(char == 'l'){
     digitalWrite(MotorAip1,HIGH);     
    digitalWrite(MotorAip2,LOW);
    digitalWrite(MotorBip1,LOW);
    digitalWrite(MotorBip2,HIGH);
      
    }
    else if(char == 'r'){
     digitalWrite(MotorAip1,LOW);     
    digitalWrite(MotorAip2,HIGH);
    digitalWrite(MotorBip1,HIGH);
    digitalWrite(MotorBip2,LOW);
    }
        }
    else if(char == 'b'){
     digitalWrite(MotorAip1,LOW);     
    digitalWrite(MotorAip2,HIGH);
    digitalWrite(MotorBip1,LOW);
    digitalWrite(MotorBip2,HIGH);
    }
        else if(char == 'F'){
     digitalWrite(MotorAip1,HIGH);     
    digitalWrite(MotorAip2,LOW);
    digitalWrite(MotorBip1,HIGH);
    digitalWrite(MotorBip2,LOW);
    }
    
  }

}
