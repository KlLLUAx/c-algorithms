#include<stdio.h>

void main(){
    char *ptr[] = {
    "january","february","march",
    "april","may","june","july",
    "august","september","october",
    "november","december"
    };

    for(int i=0;i<12;i++){
        printf("%s\n",ptr[i]);
    }
}