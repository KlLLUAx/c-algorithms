#include<stdio.h>
#include<string.h>

void main(){
    char str1[20] = "hello world";
    char str2[20];

    strcpy(str2,str1);

    puts(str2);
}