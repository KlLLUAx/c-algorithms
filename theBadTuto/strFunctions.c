#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
/*char f [] = "First ";
char s [] = "Blood";
char x [] = {};

strcpy(x,s);
printf("%s",strcat(f,x));
printf("%d",strlen(x));
*/
/*
char x[] = "Hello";
char y[] = "Hello";

if(!strcmp(x,y)){
    printf("string are the same");
}else{
    printf("they are difrent");
}

char a[] = "Hello world";
if(strchr(a,'h')){
    printf("The character is there");
}else{
    printf("not");
}
*/

char x[] = {"Hello world"};
char y[] = {"world"};
if(strchr(x,'H')){
    printf("true");
}else{
    printf("false");
}


}