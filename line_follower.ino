//declare pins
int ls = 6; //left sensor
int ms = 7; //middle sensor
int rs = 8; //right sensor
int lm1 = 2; //Left motors control 1
int lm2 = 3; //left motors control 2
int rm1 = 4; // right motors control 1
int rm2 = 5; // right motors control 2
int lm_enable = 10 ;
int rm_enable = 11;
//declare variables
int lss = 0; //left sensor state
int mss = 0; // middle sensor state
int rss = 0; // right sensor state


void setup() {
  Serial.begin(9600);
  pinMode(ls, INPUT);
  pinMode(ms, INPUT);
  pinMode(rs, INPUT);
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
  pinMode(lm_enable, OUTPUT);
  pinMode(rm_enable, OUTPUT);

}

void loop() {
  analogWrite(lm_enable, 255); // the motors are always enabled. Can be ignored if L293D is used in place of L298N
  analogWrite(rm_enable, 255);
  if (mss == HIGH) //middle sensor is on track
  { //Both motors move forward
    digitalWrite(lm1, HIGH);
    digitalWrite(lm2, LOW) ;
    digitalWrite(rm1, HIGH);
    digitalWrite(rm2, LOW);
    Serial.println("Moving forward");
  }
  else if (rss == HIGH) // middle sesnor if not on track and right sensor is on track
  { //bot turns right
    digitalWrite(lm1, HIGH);
    digitalWrite(lm2, LOW) ;
    digitalWrite(rm1, HIGH);
    digitalWrite(rm2, HIGH);
    Serial.println("Turned right");
  }
  else if (lss == HIGH) //bot turns left
  {
    digitalWrite(lm1, HIGH);
    digitalWrite(lm2, HIGH) ;
    digitalWrite(rm1, HIGH);
    digitalWrite(rm2, LOW);
    Serial.println("Turned left");
  }
  else
  {
    digitalWrite(lm1, LOW);
    digitalWrite(lm2, LOW) ;
    digitalWrite(rm1, LOW);
    digitalWrite(rm2, LOW);
    Serial.println("Bot Stopped");
  }
  delay(200);
}
