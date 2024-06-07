#include<stdio.h>

void main(){
    int a,b,c;
    a = 3;
    b = 15;
    c = 2;
   // (a>b)? printf("a > b "):printf("b > a");

    (a>b)?((a>c)?printf("A is the largest"):printf("C is the largest")):
    ((b>c)?printf("B is the largest"):printf("c is the largest."));

}