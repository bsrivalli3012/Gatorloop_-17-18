int dir1PinA = 2;
int dir2PinA = 3;
int speedPinA = 10;


int dir1PinB = 4;
int dir2PinB = 5;
int speedPinB = 11;


void setup() {
  // put your setup code here, to run once:  
  pinMode(dir1PinA, OUTPUT);
  pinMode(dir2PinA, OUTPUT);
  pinMode(speedPinA, OUTPUT);

  pinMode(dir1PinB, OUTPUT);
  pinMode(dir2PinB, OUTPUT);
  pinMode(speedPinB, OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
    analogWrite(speedPinA, 255);//Sets speed variable via PWM
    digitalWrite(dir1PinA, LOW);
    digitalWrite(dir2PinA, HIGH);
    Serial.println("Motor 1 Forward"); // Prints out “Motor 1 Forward” on the serial monitor
    Serial.println("   "); // Creates a blank line printed on the serial monitor


    analogWrite(speedPinB, 255);
    digitalWrite(dir1PinB, LOW);
    digitalWrite(dir2PinB, HIGH);
    Serial.println("Motor 2 Forward");
    Serial.println("   ");
}
