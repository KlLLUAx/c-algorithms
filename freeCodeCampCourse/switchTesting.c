#include<stdio.h>

void main(){
    char grade = 'x';

    switch (grade)
    {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did good!");
        break;
    case 'C':
        printf("You did ok!");
        break;
    case 'D':
        printf("You get better!");
        break;
    case 'E':
        printf("You not enogh!");
        break;
    case 'F':
        printf("You did Bad!");
        break;
    default:
        printf("Invalid grade!");
        break;
    }

}