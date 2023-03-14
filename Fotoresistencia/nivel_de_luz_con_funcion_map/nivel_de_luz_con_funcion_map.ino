int LDR = A0; //
int LED = 11; // es una de las salidas PWM 
int vldr, vled;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  vldr = analogRead(LDR);
  vled = map(vldr, 100, 950, 0, 255);
  analogWrite(LED, vled);
  
  Serial.print("El valor es: ");
  Serial.println(vldr);
  
  delay(100);
}
