#include<stdio.h>
#include<stdlib.h>

double cube(double num);
void main(){
    double num = 0;
    printf("Enter a number so we can cube it: ");
    scanf("%lf",&num);
    printf("the cube of %f is %.2f",num,cube(num));
}
double cube(double num){
    double n2 = num*num*num;
    return n2;
}