/*
 * LearningC.c
 *
 * Created: 28/05/2020 12:21:31
 * Author : bee
 */ 
#define F_CPU 16000000L // 16 MHz
#include <avr/io.h>
#include <stdio.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "USART_M328P.h"
uint8_t buffer;
volatile uint8_t Str_RX_flag = 0;


ISR(USART_RX_vect){
	buffer = UDR0;
	Str_RX_flag =1;
}


int main(void)
{
	USART0Init();
	sei();
	USART_putstring("A");
	for (int i =0; i<5;i++){// print
			int a ="hello";
			USART_putstring(a);
			USART_send_char(10);
			_delay_ms(100);
		}
		
	int x =5,y=5;
	int *xprt = &x, *yprt= &y;
	xprt ==yprt;
	*xprt == *yprt;
	
	int someVal;
	!someVal;
	someVal ==0;
	
	int a,b,c,d;
	a=b?c:d;
	if (b)
		{a=c;}
		else 
			{a=d;}
	}
   


/*
 * this 
 * is 
 * a
 * multi-line
 * comment
 */ 
