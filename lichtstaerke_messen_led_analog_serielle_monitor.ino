int entry = A0;
int led_blue = 9;
int led_blue_value;

void setup() {
  Serial.begin(9600);
  pinMode(led_blue, OUTPUT);
}

void loop() {
  
  led_blue_value = analogRead(entry);
  Serial.println("Sensorwert: ");
  Serial.println(led_blue_value);
  analogWrite(led_blue, led_blue_value/6);
  delay(10);
  
}
