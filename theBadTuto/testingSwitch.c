#include<stdio.h>

void main(){
    double a,b;
    a=10;
    b=20;  
    char x;
    scanf("%c",&x);

    switch(x){

        case '+':
        printf("%.2f",a+b);
        break;
        case '-':
        printf("%.2f",a-b);
        break;
        case '*':
        printf("%.2f",a*b);
        break;
        case '/':
        printf("%.2f",a/b);
        break;
        default:
        printf("invalid input!");
    }
}