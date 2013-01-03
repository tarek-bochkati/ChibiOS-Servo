ChibiOS/Servo is a small library which allows it to interface standard RC servos to ChibiOS/RT easily.


### HowTo use ###

To use this small library, just add the servo.c and servo.h files to your project.

First, you have to create an instance of the servo struct. The servo contains the following informations:

	- GPIO port of the servo
	- GPIO pin of the servo
	- The PWM driver pointer
	- The PWM channel
	- The minimum value the servo shall never go below (safty)
	- The maxmimum value the servo shall never go over (Safty)

This instance will be passed to every function which controlls the servo. For nice API reasons, there are also
function to set and get the maximum and minimum value.

