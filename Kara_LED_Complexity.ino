/*
  LED Complexity
  My idea was inspired by a refrigerator.
  The light is on when the sensor value is over 400.
  When the sensor is covered, the light is off.
  When the button is pressed, it becomes brighter.
*/

int ledExternal = 12;
int ledInternal = 13;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the LED pin as outputs.
  pinMode(ledExternal, OUTPUT);
  pinMode(ledInternal, OUTPUT);
  // initialize the input pin as input
  pinMode(A0, INPUT);

}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability

  if(sensorValue>=400){
    digitalWrite(ledExternal, HIGH);   
    digitalWrite(ledInternal, LOW);    
  } else {
      digitalWrite(ledExternal, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(ledInternal, HIGH);   // turn the LED on by making the voltage HIGH
  }
}
