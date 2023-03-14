int led_r = 11;
int led_g = 10;
int led_b = 9;

void setup() {
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_b, OUTPUT);
}
void loop() {
digitalWrite(led_b, HIGH);
digitalWrite(led_g, HIGH);
digitalWrite(led_r, LOW);
delay(1000);
digitalWrite(led_r, HIGH);
digitalWrite(led_g, LOW);
delay(1000);
digitalWrite(led_g, HIGH);
digitalWrite(led_b, LOW);
delay(1000);
digitalWrite(led_r, LOW);
digitalWrite(led_g, LOW);
delay(1000);
}
