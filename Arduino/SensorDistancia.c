long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float dist = 0.01723 * readUltrasonicDistance(3, 2);
  Serial.println(0.01723 * readUltrasonicDistance(3, 2));
     if (dist > 100){
    digitalWrite(13, HIGH);    
  }
   if (dist > 80 and dist < 100) {
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
  }
  if (dist > 60 and dist < 80) {
    digitalWrite(13, HIGH);
    delay(10);
    digitalWrite(13, LOW);
  }

  if (dist < 60 and dist > 40) {
    digitalWrite(12, HIGH);
    tone(10, 500, 6000);
    delay(100);
    noTone(10);
    digitalWrite(12, LOW);
    } if (dist < 40 and dist > 20) {
        digitalWrite(12, HIGH);
        tone(10, 1000, 6000);
        delay(10);
        noTone(10);
        digitalWrite(12, LOW);
      }  if (dist < 20) {
        digitalWrite(12, HIGH);
        tone(10, 1500, 6000);
      }
  delay(100);// Delay a little bit to improve simulation performance
}
