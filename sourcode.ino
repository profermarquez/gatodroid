/* This example Arduino Sketch controls the complete rotation of
 *  SG995 Servo motor by using its PWM and Pulse width modulation technique
 */

#include <Servo.h> // include servo library to use its related functions
#define Servo_PWM 6
#define Servo_PWM1 5
#define Servo_PWM2 4
#define Servo_PWM3 3

Servo MG995_Servo;
Servo MG995_Servo1; 
Servo MG995_Servo2;
Servo MG995_Servo3;   

void setup() {
 Serial.begin(9600);
 MG995_Servo.attach(Servo_PWM);  
 MG995_Servo1.attach(Servo_PWM1);
 MG995_Servo2.attach(Servo_PWM2);
 MG995_Servo3.attach(Servo_PWM3);
  
 //TEST
 MG995_Servo.write(95);
 delay(50);
 MG995_Servo.write(90);
 delay(50);
 MG995_Servo.write(80);
 delay(50);

 MG995_Servo1.write(95);
 delay(50);
 MG995_Servo1.write(90);
 delay(50);
 MG995_Servo1.write(80);
 delay(50);

  MG995_Servo2.write(95);
 delay(50);
 MG995_Servo2.write(90);
 delay(50);
 MG995_Servo2.write(80);
 delay(50);

  MG995_Servo3.write(95);
 delay(50);
 MG995_Servo3.write(90);
 delay(50);
 MG995_Servo3.write(80);
 delay(50);

}

void loop() {
 
     MG995_Servo.write(90);
     MG995_Servo1.write(90);
     MG995_Servo2.write(90);
     MG995_Servo3.write(90);

}
