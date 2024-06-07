#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double num1;
    double num2;
    printf("Enter the  first number: ");
    scanf("%lf",&num1);
    printf("Enter the second number: ");
    scanf("%lf",&num2);
    printf("%.2f + %.2f = %.2f",num1,num2,(num1+num2));

    return 0;
}