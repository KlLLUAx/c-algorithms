#include<stdio.h>

void main(){ 

register int n1;
n1 = 10;
auto int n2;
n2 =10;
printf("%d",&n1);// da erro porque não é possivel acessar o enderesso do registrador
//do processador 
printf("%d",n2);//mostra o endereço de memória da variavel na memoria ram. 

}