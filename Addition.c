//Embedded C program to perform addition of two numbers

#include <stdio.h>
#include <stdlib.h>
#include <pic18f4550.h>
void main(void)
{
 int a,b;
 a=5; b=3;
 sum = 0; // initialize sum as zero
 sum = a+b;

 TRISB =0; //initialize Port_B as output
 PORTB = sum; // from sum to PORT_B
}
