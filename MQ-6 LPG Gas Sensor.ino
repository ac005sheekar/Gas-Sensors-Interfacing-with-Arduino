void setup()

{

  Serial.begin(9600);      // Start Serial Communication/ Baud Rate

}

 

/* This Particular Function is used for Repeated Execution of the Circuit until Specified. */

 

void loop()

{

  float sensorVoltage;                                      // Initialize Variable for Sensor Voltage

  float sensorValue;                                                // Initialize Variable for Sensor Value

  sensorValue = analogRead(A0);                  // Read the Sensor Values from Analog Pin A0

  sensorVoltage = sensorValue/1024*5.0;      // Calculate the Sensor Voltage

  Serial.print("sensor voltage = ");                  // Print the Message

  Serial.print(sensorVoltage);                         // Print the Values

  Serial.println(" V");                                       // Print the Message

  delay(1000);                                                // Wait for 1000 ms

 }