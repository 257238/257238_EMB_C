#ifndef _ACTIVITY4_H__
#define __ACTIVITY4_H__

#include<avr/io.h>

void InitializeUART(uint16_t ubrr);

char UARTread();
/
void UARTwrite(char data);

#endif
