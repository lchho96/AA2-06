void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A0);
Serial.print("AA06,AA20, Present value(0~1023):");
Serial.println(sensor);
delay(500);
}
