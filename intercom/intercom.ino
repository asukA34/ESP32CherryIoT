const int swPin = 32;
//4:ConnectorA 9:ConnectorB
const int ledPin = 25;
//4:ConnectorA 9:ConnectorB 10:Builtin

void setup() {
  Serial.begin(115200);
  pinMode(swPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(swPin) == HIGH) {
    digitalWrite(ledPin, HIGH); //ON
    delay(500); //0.5sec

    //Look at the serial monitor
    Serial.println("Pushed"); 
    delay(500);
  } else {
    digitalWrite(ledPin, LOW); //OFF
    delay(500); //0.5msec

    Serial.println("Not Pushed");
    delay(500);
    
  }
}
