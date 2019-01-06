#include "ServoController.h"

int main()                                    // Main function
{
  // Add startup code here.
  print("Running ServoController.c\n");
 
  int userInput;
  while(1)
  {
    // Add main loop code here.
    print("What would you like to do?");
    scan("%d/n", &userInput);
    if(userInput == 1){
      //testServo(HEAD_SERVO_PIN);
      testServo(17);
    }      
  }
} 
