#include<stdio.h>

void main(){
    int i,j;
    for(i = 0; i<=10; i++){
        printf(" i = %d\n",i);
        for(j=i;j<=i;j++){
            printf("j = %d\n",j);
            break;
        }
        printf("j = %d\n",j);
    }
}