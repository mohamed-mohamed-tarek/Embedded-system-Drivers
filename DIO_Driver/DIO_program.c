/*
 * DIO_program.c
 *
 * Created: 4/16/2023 10:55:07 PM
 *  Author: Lenono
 */ 

#include "DIO_interface.h"
#include "DIO_private.h"
void  DIO_set_PinValue (u8 port , u8 pin_num , u8 value){
	 if (value == HIGH){
		 
		 switch (port){
		  case port_A : SET_BIT(PORTA,pin_num);break;
		  case port_B : SET_BIT(PORTB,pin_num);break;
		  case port_C : SET_BIT(PORTC,pin_num);break;
		  case port_D : SET_BIT(PORTD,pin_num);break;
		 }
	 }else if (value == LOW){

		  
		  switch (port){
			  case port_A : CLR_BIT(PORTA,pin_num);break;
			   case port_B : CLR_BIT(PORTB,pin_num);break;
			    case port_C : CLR_BIT(PORTC,pin_num);break;
				 case port_D : CLR_BIT(PORTD,pin_num);break;
		  }
	 }
	 
	
}
void  DIO_set_direction (u8 port , u8 pin_num , u8 direction){
 if (direction == output){
	 
	 switch (port){
		 case port_A : SET_BIT(DDRA,pin_num);break;
		 case port_B : SET_BIT(DDRB,pin_num);break;
		 case port_C : SET_BIT(DDRC,pin_num);break;
		 case port_D : SET_BIT(DDRD,pin_num);break;
	 }
	 }else if (direction == input){

	 
	 switch (port){
		 case port_A : CLR_BIT(DDRA,pin_num);break;
		 case port_B : CLR_BIT(DDRB,pin_num);break;
		 case port_C : CLR_BIT(DDRC,pin_num);break;
		 case port_D : CLR_BIT(DDRD,pin_num);break;
	 }
 }
 	
	
}

u8    DIO_GETpinValue (u8 port , u8 pin_num){
	
	switch (port){
     case port_A : return GET_BIT(PINA,pin_num);break;
	 case port_B : return GET_BIT(PINB,pin_num);break;
	 case port_C : return GET_BIT(PINC,pin_num);break;
	 case port_D : return GET_BIT(PIND,pin_num);break;
	}
}