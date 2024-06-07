#include<stdio.h>

void main(){

int a = 59;
int b = 42;
int c = 60;

printf("\nthe result of the BITWISE AND is: %d",a&b); // the and bitwise of two operands
//is 1 if the bit in both of the binary numbers are 1, otherwise its 0 
printf("\nthe result of the BITWISE OR is: %d",a|b);// the OR bitwise of two operands 
//is 1 if one of the bits of the operands are 1 and its only 0  if its both 0
printf("\nthe result of the BITWISE XOR is: %d",a^b);//the XOR bitwise of two operands 
//is 1 when the bits of the operands are diferent, and its 0 when they are the same number
printf("\nThe left shift of the number %d is: %d ", c, c<<2);//the left shift will multiply the number by the base 2
//over the number of shifts to the left like: n*2^x 
printf("\nThe right shift of the  number %d is: %d",c,c>>2);//the right shift will devide the number by the base of 2 
//over the number of shifts like: n/2^x


}