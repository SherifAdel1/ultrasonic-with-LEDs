int red =1;
int green=2;
int yellow=3;
int blue=4;
int trig=5;
int echo=6;
void setup() {
  for (int i=1;i<=5;i++){
    pinMode(i,OUTPUT);

  }
  pinMode(6,INPUT);

  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trig,0);
  delayMicroseconds(2);

   digitalWrite(trig,1);
     delayMicroseconds(10);
     digitalWrite(trig,0);
  int duration=pulseIn(echo,1);
int distance=(duration/2)*.0343;
Serial.println(distance);
delay(5);
if (distance>200){
digitalWrite(1,1);
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
}
else if (distance<200&&distance>150) {
  digitalWrite(1,1);
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,0);
}
else if (distance<150&&distance>100){
  digitalWrite(1,1);
digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,0);
}
else if (distance<100&&distance>70) {
  digitalWrite(1,1);
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
}
else   {
  digitalWrite(1,0);
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
}




  // put your main code here, to run repeatedly
}