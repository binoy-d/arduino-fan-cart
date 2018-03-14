#include <AFMotor.h>


int desiredSpeed = 10;// m/s
int motorSpeed = desiredSpeed;//not m/s.


// Use the connections for motor number 4 on the Arduino v1.0 motor shield.
AF_DCMotor motor(4);

void setup() {
    // Make sure the motor is stopped and ready to go.
   motor.setSpeed( 25 );
   motor.run( RELEASE );

}

void loop() {
  //currentspeed = read(accelerometer)
  //if currentspeed < desiredspeed, motorspeed ++
  //else,  motorspeed --
  //set motor's speed to motorspeed
}
