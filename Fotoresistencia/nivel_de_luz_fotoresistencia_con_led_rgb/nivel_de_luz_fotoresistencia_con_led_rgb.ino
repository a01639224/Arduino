int LDR = A0;
int led_r = 11;
int led_g = 10;
int led_b = 9;

void setup(){
  pinMode(LDR, INPUT);
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_b, OUTPUT);
  Serial.begin(9600);
}    
void loop(){
  int valor = analogRead(LDR);
  Serial.println(valor);
  
  if (valor >= 930){
    digitalWrite(led_r, LOW);
    digitalWrite(led_g, HIGH);
    digitalWrite(led_b, HIGH);
  }
  else if (valor <= 300){
    digitalWrite(led_r, HIGH);
    digitalWrite(led_g, HIGH);
    digitalWrite(led_b, LOW);
  }
  else {
    digitalWrite(led_r, HIGH);
    digitalWrite(led_g, LOW);
    digitalWrite(led_b, HIGH);
  }
}
