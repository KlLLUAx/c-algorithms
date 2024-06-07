#include<stdio.h>
#include<string.h>


typedef struct{
    char name[50];
    char major[50];
    double grade;
    int enrollment;
}Aluno;

void inscreverAluno(Aluno *aluno);
void main(){
    Aluno aluno;
    increverAluno(&aluno);

}
void increverAluno(Aluno *aluno){
    printf("Informe o nome do aluno: ");
    scanf("%s",aluno->name);

}