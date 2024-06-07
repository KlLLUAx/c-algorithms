#include<stdio.h>

void main(){
    int n = 0;

    printf("Digite um numero para saber se eh par ou impar: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d eh par",n);
    }else{
        printf("%d eh impar",n);
    }
}