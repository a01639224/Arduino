int sensor = A0;
int nivel;

void setup(){
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}    
void loop(){
  nivel = analogRead(sensor);
  Serial.println(nivel);
}
