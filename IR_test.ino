//Path detection with IR Sensor Module
int LED = 13; // Use the onboard Uno LED
int IR_in = 7;  // This is our input pin
int test_track = HIGH; //On track  

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(IR_in, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  test_track = digitalRead(IR_in);
  if (test_track == LOW)
  {
    Serial.println("Out of track");
    digitalWrite(LED, LOW);
  }
  else
  {
    Serial.println("On Track");
    digitalWrite(LED, HIGH);
  }
  delay(20);
}

