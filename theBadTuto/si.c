#include<stdio.h>

void main(){
int prin, time;
float rate,si;

printf("Enter the principal, the duration and the rate: ");
scanf("%d%d%f",&prin,&time,&rate);
si = prin*time*rate/100;
printf("the intrest is %.2f",si);

}