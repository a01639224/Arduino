int potentiometer = A0;
int led = 11;
int vptm, vled;

void setup(){
  pinMode(potentiometer, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}    
void loop(){
  vptm = analogRead(potentiometer);
  vled = map(vptm, 0, 1023, 0, 255);
  analogWrite(led, vled);
  
 Serial.println(vptm);
}
