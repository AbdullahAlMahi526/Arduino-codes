#include <Servo.h>

const int trigPin = 9; // Trig pin of the ultrasonic sensor
const int echoPin = 10; // Echo pin of the ultrasonic sensor
const int servoPin = 6; // Pin connected to the servo

Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myServo.attach(servoPin);
}

void loop() {
  long duration, distance;
  
  // Clear the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Send a pulse to trigger the ultrasonic sensor
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the duration of the echo
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance in centimeters
  distance = duration * 0.034 / 2;
  
  // Print the distance measured
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Map the distance to servo angle (adjust the values as needed)
  int angle = map(distance, 5, 20, 0, 180);
  
  // Move the servo motor based on the mapped angle
  myServo.write(angle);
  
  delay(50); // Adjust the delay as needed
}