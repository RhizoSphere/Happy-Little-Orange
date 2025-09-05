int myPin=A2;
int readVal;
float V2;
int dt=250;
int redPin=3;
int yellowPin=5;
int greenPin=9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myPin,INPUT);
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

readVal=analogRead(myPin);
V2=(5./1023.)*readVal;
Serial.print("Potentiometer Voltage is ");
Serial.println(V2);
// turn on green LED
if (V2 < 3){
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellowPin,LOW);
  digitalWrite(redPin,LOW);
  }
// turn on yellow LED
if (V2 >= 3 && V2 < 4){
  digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(redPin,LOW);
}
// turn on red LED
if (V2 >= 4 ){
  digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,LOW);
  digitalWrite(redPin,HIGH);
}
delay(dt);
}
