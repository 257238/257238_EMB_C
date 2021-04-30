#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_

#include <avr/io.h>
#include "activity1.h"


#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SENSOR_ON !(PIND&(1<<PD0)) // Switch1 ON
#define HEAT_ON !(PIND&(1<<PD1)) // Switch2 ON

void activity1(uint8_t state);
void InitializeLED(void);

#endif
