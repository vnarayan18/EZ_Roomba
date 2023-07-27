#include <NewPing.h>
#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
#define TRIGGER_PIN  A4  // Trigger pin from analog pins
#define ECHO_PIN     A5  // Echo pin from analog pins
#define MAX_DISTANCE 200 // Maximum distance in centimeters. Maximum sensor distance is rated at 400-500cm.
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup() {
}

void loop() {
  int d = sonar.ping_cm();
  if (d<30) {
  motor1.setSpeed(50);
  motor2.setSpeed(50);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(5000);98
  }
  else if (d>=30){
  motor1.setSpeed(50);
  motor2.setSpeed(50);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(2000);
  }
}
