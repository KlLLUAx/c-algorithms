#include<stdio.h>

void main(){
    int x = 10;
    int *ptr = &x;

    printf("the value  of x: %d\n",x);
    printf("the address in memory of x: %d\n",&x);
    printf("the address of x stored in ptr: %d\n",ptr);
    printf("the value of x store in ptr: %d\n",*ptr);//as you need to add the * to access
    //the value store in a pointer... if not it will show only the address of the variable
    


}