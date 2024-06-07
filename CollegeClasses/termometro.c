#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
   double cTemp;
   double x;
   printf("Informe a temperatura em Celsius:");
   scanf("%lf",&cTemp);
   
   x = (cTemp*9/5)+32;
   

   printf("A temperatura é: %f",x);
    
}