#include <stdio.h>

// Definição da struct
struct Aluno {
    char nome[50];
    int idade;
    int numeroReg;
};

// Função que recebe uma struct como parâmetro
void menorIdade(struct Aluno aluno) {
    int compIdade;
    printf("\nDigite uma idade: ");
    scanf("%d", &compIdade);

    printf("\nALUNOS COM IDADE MENOR QUE %d:\n", compIdade);
    for (int i = 0; i < qtdAlunos; i++) {
        if (aluno[i].idade < compIdade) {
            printf("%s - %d\n", aluno[i].nome, aluno[i].idade);
        }
    }
}

int main() {
    // Declaração de um array de structs
    struct Aluno aluno[qtdAlunos];

    for (int i = 0; i < qtdAlunos; i++) {
        setbuf(stdin, NULL);
        printf("\nALUNO %d\n", i + 1);
        printf("Nome: ");
        fgets(aluno[i].nome, 50, stdin);
        printf("Idade: ");
        scanf("%d", &aluno[i].idade);
        printf("Número de registro: ");
        scanf("%d", &aluno[i].numeroReg);
    }

    // Chamada da função
    menorIdade(aluno);

    return 0;
}
