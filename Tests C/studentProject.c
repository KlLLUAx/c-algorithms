#include<stdio.h>
#include<string.h>

typedef struct{
char nome[50];
int idade;
double nota;
}Aluno;

void exibeAluno(Aluno aluno);

void main(){

    Aluno pedro;

    strcpy(pedro.nome,"Pedro");
    pedro.idade = 10;
    pedro.nota =9.0;

    exibeAluno(pedro);
}

void exibeAluno(Aluno aluno){
printf("Nome: %s\n",aluno.nome);
printf("Idade:%d\n",aluno.idade);
printf("Nota: %f\n",aluno.nota);
}

