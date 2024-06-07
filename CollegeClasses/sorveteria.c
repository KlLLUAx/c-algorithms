#include<stdio.h>

void main(){
    int sabor;1[]
    int bolas; 
    printf("informe o sabor do sorvete: ");
    scanf("%d",&sabor);
    printf("Informe a quantidade de bolas: ");
    scanf("%d",&bolas);
    if(sabor==1 && bolas>3){
    printf("Você tem direito a um descontode 10%%");
    }else if(sabor==1 && bolas<=3){
        printf("você tem um desconto de 5%%");
    }else if(sabor==2){
        printf("Sorvete sem desconto.");
    }
}