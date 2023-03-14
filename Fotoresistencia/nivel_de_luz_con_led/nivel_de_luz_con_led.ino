int LDR = A0;
int led = 11;

void setup(){
  pinMode(LDR, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}    
void loop(){
  int valor = analogRead(LDR);
  Serial.println(valor);
  
  if (valor >= 900){
    digitalWrite(led, LOW);
  }
  else {
    digitalWrite(led, HIGH);
  }
}
