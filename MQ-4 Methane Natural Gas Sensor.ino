intpinRedLed = 11;
intpinGreenLed = 8;
intpinSensor = A5;
intTHRESHOLD = 250;
voidsetup() {
pinMode(pinRedLed, OUTPUT);
pinMode(pinGreenLed, OUTPUT);
pinMode(pinSensor, INPUT);
Serial.begin(9600);
}
voidloop() {
int analogValue = analogRead(pinSensor);
Serial.println("Val: " +analogValue);
digitalWrite(pinGreenLed, HIGH);
if (analogValue >= THRESHOLD) {
digitalWrite(pinGreenLed, LOW);
digitalWrite(pinRedLed, HIGH);
}
else {
digitalWrite(pinRedLed, LOW);
}
delay(5000);
}