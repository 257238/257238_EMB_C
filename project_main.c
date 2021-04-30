
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
#include<avr/io.h>

void peripheral_init(void)
{
    /*Configure LED and Switch pins*/
    InitializeLED();
    /*Configure ADC registers and pins*/
    InitializeADC();
    /*Configure PWM registers and pins*/
    InitializePWM();
    /*Configure UART serial communication pin*/
    InitializeUART(103);
}
    
   
uint16_t temp;
char temp_data;
int main(void)
{
    /*uint16_t temp;*/
    // Initialize peripherals
    peripheral_init();
    
    while(1)
    {
        if(SENSOR_ON) //If switch_1 is ON
        {
            if(HEAT_ON) //If switch_2 is ON
            {
                activity1(LED_ON);//LED is ON
                temp=ADCread(0);
                temp_data = PWMout(temp);
                UARTwrite(temp_data);

            }
            else
            {
                
                activity1(LED_OFF);
            }
        }
        else
        {
            activity1(LED_OFF);//LED is OFF
            OCR1A=0;
        }
    }
    return 0;
}
