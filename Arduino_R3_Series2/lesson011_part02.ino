int waitT=750;
float pi=3.14;
float r=2;
float area;
String mess1="A Circle With Radius of ";
String mess2=" Has an Area of ";
String mess3=".";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
area=pi*r*r;
Serial.print(mess1);
Serial.print(r);
Serial.print(mess2);
Serial.print(area);
Serial.println(mess3); 
delay(waitT);
r=r+.5;
}
