#include<avr/io.h>
#include "activity1.h"

void activity1(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
void InitializeLED(void)
{
	DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    PORTD|=(1<<PD1);
}
