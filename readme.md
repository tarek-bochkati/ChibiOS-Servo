ChibiOS/Servo is a small library which allows it to interface standard RC servos to ChibiOS/RT easily.


### HowTo use ###

To use this small library, just add the servo.c and servo.h files to your project.

First, you have to create an instance of the servo struct. The servo contains the following informations:


	typedef struct Servo_t {
			ioportid_t port;			// The GPIO port on which the servo is connected
			ioportmask_t pin;			// The GPIO pin on which the servo is connected
			PWMDriver *pwm_driver;		// The PWM driver to use
			pwmchannel_t pwm_channel;	// The PWM channel to use
			uint16_t min;				// The minimum value the servo shall never go below
			uint16_t max;				// The maximum value the servo shall never go over
	} Servo;


This instance will be passed to every function which controlls the servo. For nice API reasons, there are also
function to set and get the maximum and minimum value.

