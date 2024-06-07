#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){

/*  srand(time(NULL));  Gera numeros pseudo aleatórios baseado na hora do 
computador que compila o codigo */ 
    srand((unsigned)time(NULL));/*Gera numeros pseudo aleatórios baseado na hora  do 
    computador que compilou o código. a diferença do codigo acima é que temos "unigned"
    passado como parametro, fazendo com que o numero gerado possa ser manipulado por 
    operadores matematicos(*,+,%...) sem o unsinged não poderiamos manipular o resultado
    do metodo rand()*/

    int randNumber = (rand()%10)+1; /*manipula o resultado do metodo rand() para que
    ele seja o resto da divisão por 10 que pode ser qualquer numero de 0 a 9, em seguida
    adicionamos +1 no resultado para ser qualquer numero de 1 a 10. */

    printf("%d",randNumber);/*exibe o numero pseudo aleatório armazenado na variavel*/

}