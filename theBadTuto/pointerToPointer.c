#include<stdio.h>

void main(){

    int a,*b,**c;
    a = 100;
    b = &a;
    c = &b;

    printf(" value of a: %d\n",a);
    printf("Value of a through b: %d\n ",*b);
    printf("Value of a through c: %d\n",**c);
    printf("Address of a: %d\n",&a);
    printf("Address of a through  b: %d\n",b);
    printf("Address of a through c: %d\n",*c);
    printf("Addess of b: %d\n",&b);
    printf("Address of b through c: %d\n",c);
    printf("Address of a through c: %d\n",*c);



}