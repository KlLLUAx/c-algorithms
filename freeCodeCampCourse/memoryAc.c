#include<stdio.h>

void main(){
    int age = 30;
    double gpa = 2.1;
    char grade = 'A';

    printf("age: %p\n gpa: %p\n grade: %p",&age,&gpa,&grade);

}