#include "ch.h"
#include "hal.h"

typedef struct Servo_t {
	ioportid_t port;
	ioportmask_t pin;
	PWMDriver *pwm_driver;
	pwmchannel_t pwm_channel;
	uint16_t min;
	uint16_t max;
} Servo;

void servoInit(Servo *servo);
void servoSetValue(Servo *servo, uint16_t value);
void servoSetMin(Servo *servo, uint16_t value);
void servoSetMax(Servo *servo, uint16_t value);
uint16_t servoGetMin(Servo *servo);
uint16_t servoGetMax(Servo *servo);

