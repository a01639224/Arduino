const int Trigger = 6;
const int Echo = 5; // Pin digital 3 para el Echo del sensor
int led_r = 11;
int led_g = 10;
int led_b = 9;

void setup() {
  Serial.begin(9600); // iniciailzamos la comunicación
  pinMode(Trigger, OUTPUT); // pin como salida
  pinMode(Echo, INPUT);  // pin como entrada
  digitalWrite(Trigger, LOW); // Inicializamos el pin con 0
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_b, OUTPUT);
}

void loop() {
  
  long t; // tiempo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10); // Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);

  t = pulseIn(Echo, HIGH); // obtenemos el ancho del pulso
  d = t/59; // escalamos el tiempo a una distancia en cm

  if (d <= 25) {
    digitalWrite(led_r, LOW);
    digitalWrite(led_g, HIGH);
    digitalWrite(led_b, HIGH);
  } 
  
  else if ((25 < d) && (d <= 50)) {
    digitalWrite(led_r, LOW);
    digitalWrite(led_g, LOW);
    digitalWrite(led_b, HIGH);
  }

  else {
    digitalWrite(led_r, HIGH);
    digitalWrite(led_g, LOW);
    digitalWrite(led_b, HIGH);
  }
  
Serial.print("Distancia: ");
Serial.print(d); // Enviamos serialmente el valor de la distancia
Serial.print("cm");
Serial.println();
delay(1000); // Hacemos una pausa de 1000 ms

}
