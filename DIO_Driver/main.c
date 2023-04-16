
#define  F_CPU 8000000
#include "DIO_interface.h"
#include <util/delay.h>

int main(void)
{
	DIO_set_direction(port_A,1,output);
	DIO_set_direction(port_B,1,input);
    /* Replace with your application code */
	
    while (1) 
    {
	  u8 x = DIO_GETpinValue(port_B,1);
	  if (x==HIGH){
		  DIO_set_PinValue(port_A,pin_1,HIGH);
	  }else {
		  DIO_set_PinValue(port_A,pin_1,LOW);
		  
	  }
	  
		
		//_delay_ms(3000);
		
		//_delay_ms(3000);
		
    }
}

