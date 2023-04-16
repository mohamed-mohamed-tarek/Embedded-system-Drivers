/*
 * DIO_interface.h
 *
 * Created: 4/16/2023 10:55:54 PM
 *  Author: Lenono
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

typedef unsigned char u8 ; 
#define SET_BIT(BYTE,BIT_NO)  (BYTE  |= (1<<(BIT_NO)))
#define CLR_BIT(BYTE,BIT_NO)  (BYTE &= ~(1<<(BIT_NO)))
#define GET_BIT(BYTE,BIT_NO) ((BYTE >> BIT_NO)&1)
#define TOGGLE_BIT(BYTE,BIT_NO) (BYTE ^= (1<<(BIT_NO)))


typedef enum {
	port_A,
	port_B,
	port_C,
	port_D,
	pin_0=0,
	pin_1,
	pin_2,
	pin_3,
	pin_4,
	pin_5,
	pin_6,
	pin_7,
	LOW=0,
	HIGH,
	input=0,
	output
	
	
	
	}en;

void  DIO_set_PinValue (u8 port , u8 pin_num , u8 value);
void  DIO_set_direction (u8 port , u8 pin_num , u8 direction);
u8    DIO_GETpinValue (u8 port , u8 pin_num);



#endif /* DIO_INTERFACE_H_ */