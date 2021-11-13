#include <Servo.h>
#define THRESHOLD 500
#define EMG_PIN 0 //Declaring analog pin


Servo SERVO_1; //Servo for thumb
Servo SERVO_2; //Servo for pinky finger
Servo SERVO_3; //Servo for index finger
Servo SERVO_4; //Servo for middle finger
Servo SERVO_5; //Servo for ring finger

void setup()
{
  Serial.begin(115200);
  SERVO_1.attach(3); //Declaring PWM pin for 
  SERVO_2.attach(5); //Declaring PWM pin for 
  SERVO_3.attach(7); //Declaring PWM pin for 
  SERVO_4.attach(9); //Declaring PWM pin for 
  SERVO_5.attach(11); //Declaring PWM pin for 
}

void loop()
{
  int value = analogRead(EMG_PIN);
  if(value>THRESHOLD)
  {
    SERVO_1.write(170); //Closing a finger at angle of 170 degrees
    SERVO_2.write(170); //Closing a finger at angle of 170 degrees
    SERVO_3.write(170); //Closing a finger at angle of 170 degrees
    SERVO_4.write(170); //Closing a finger at angle of 170 degrees
    SERVO_5.write(170); //Closing a finger at angle of 170 degrees
  }
  else
  {
    SERVO_1.write(10); //Opening a finger at angle of 10 degrees
    SERVO_2.write(10); //Opening a finger at angle of 10 degrees
    SERVO_3.write(10); //Opening a finger at angle of 10 degrees
    SERVO_4.write(10); //Opening a finger at angle of 10 degrees
    SERVO_5.write(10); //Opening a finger at angle of 10 degrees
  }
  Serial.println(value);
  delay(1000);
}
