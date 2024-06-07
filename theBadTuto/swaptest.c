#include<stdio.h>

void swap(int *,int *);

void main(){
    
    int a = 10;
    int b = 15;

    printf("the values before the changes a = %d b = %d \n ",a,b);
    swap(&a,&b);
    printf("the values after changes a = %d b = %d",a,b);
}
void swap(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
