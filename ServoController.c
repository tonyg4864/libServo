#include "ServoController.h"

//.54 drawed amps were measured for a standard servo, 5.04 volts draw were measured, .28 volts for the signal.

void testServo(int pin){
    rotateLeft(pin);
    rotateRight(pin);
    rotateCenter(pin);
    servo_stop();
}

void rotateLeft(int pin){
      int lastPulse = servo_get(pin);
      print("The last pulse was: %d\n", lastPulse);

      int disableStatus = servo_disable(pin);
      print("The servo disable status is:%d\n", disableStatus);

      print("Testing servo on pin %d\n", pin);
      servo_angle(pin, 1800);                         // P16 servo to 0 degrees
      pause(1000);                                   // ...for 3 seconds
      int lastPulseTwo = servo_get(pin);
      print("The last pulse was: %d\n", lastPulseTwo);
}

void rotateRight(int pin){
      int lastPulse = servo_get(pin);
      print("The last pulse was: %d\n", lastPulse);

      int disableStatus = servo_disable(pin);
      print("The servo disable status is:%d\n", disableStatus);

      print("Testing servo on pin %d\n", pin);
      servo_angle(pin, 400);                         // P16 servo to 0 degrees
      pause(1000);                                   // ...for 3 seconds
      int lastPulseTwo = servo_get(pin);
      print("The last pulse was: %d\n", lastPulseTwo);
}

void rotateCenter(int pin){
      int lastPulse = servo_get(pin);
      print("The last pulse was: %d\n", lastPulse);

      int disableStatus = servo_disable(pin);
      print("The servo disable status is:%d\n", disableStatus);

      print("Testing servo on pin %d\n", pin);
      servo_angle(pin, 900);                         // P16 servo to 0 degrees
      pause(1000);                                   // ...for 3 seconds
      int lastPulseTwo = servo_get(pin);
      print("The last pulse was: %d\n", lastPulseTwo);
}