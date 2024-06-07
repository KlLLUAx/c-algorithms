#include<stdio.h>
#include<string.h>
#include<locale.h>

typedef struct Player{
char fullName[51];
char nickname[21];
char playerId[8];
}Player;
void menuCadastro(Player *player);
void menuConsulta(Player *player);
void menuGerenciamento(Player *player);
void main(){
    setlocale(LC_ALL,"Portuguese");
   Player player1;
    int choice = 0;

    do{
        printf("\n\n\nMenu de Gerenciamento\n");
        printf("\n");
        printf("1 - Consultar Jogadores\n");
        printf("2 - Cadastar Jogadores\n");
        printf("3 - Gerenciar jogadores\n");
        printf("4 - Fechar gerenciador");
        printf("\n");
        printf("informe a opcao desejada: ");
        scanf("%d",&choice);
        fflush(stdin);

        if(choice==1){
            menuConsulta(&player1);
        }else if(choice==2){
            menuCadastro(&player1);
        }else if(choice==3){
            menuGerenciamento(&player1);
        }else if (choice==4){
            printf("Fechando gerenciador...\n");
        }else{
            printf("opção inválida");
        }
    }while(choice!=4);
    printf("Gerenciador fechado.");
}
void menuCadastro(Player *player){
    printf("\n\n\nMenu de Cadastro\n\n");
    printf("Informe o nome completo do jogador: ");
    gets(player->fullName);
    printf("informe o nickname do jogador: ");
    gets(player->nickname);
    strcpy(player->playerId,"12332");
    printf("\n\nJogador cadastrado com sucesso!");
    
}
void menuConsulta(Player *player){
    char id[8];
    printf("\n\n\nMenu de consulta de jogadores\n\n");
    printf("\ninforme o id do jogador: ");
    gets(id);
    if(!strcmp(id,player->playerId)){
        printf("\n\n\nDados do jogador: \n");
        printf("Nome completo do jogador: ");
        puts(player->fullName);
        printf("Nickname do jogador: ");
        puts(player->nickname);
        printf("Id do jogador: ");
        puts(player->playerId);
    }else{
        printf("\nId incorreto\n");
    }
}
void menuGerenciamento(Player *player){
    char id[8];
    int opc;
    printf("\n\n\nMenu de atualizacao de dados dos jogadores\n\n");
    printf("informe o id do jogador que deseja atualizar: ");
    gets(id);
    if(!strcmp(id,player->playerId)){
        do{
            printf("\n\n\ninforme o dado que voce deseja alterar:\n\n");
            printf("1 - Nome completo\n");
            printf("2 - Nickname\n");
            printf("3 - Deletar Registro\n");
            printf("4 - Sair do menu de atualizacao\n");
            scanf("%d",&opc);
            fflush(stdin);
            if(opc==1){
                printf("Nome completo atual: ");
                puts(player->fullName);
                printf("\nInforme um nome completo para substituir: ");
                gets(player->fullName);
                printf("\n Nome completo do jogador foi alterado com sucesso.");
            }else if(opc==2){
                printf("Nickname atual: ");
                puts(player->nickname);
                printf("\nInforme um nickname para substituir: ");
                gets(player->nickname);
                printf("\n Nickname do jogador foi alterado com sucesso.");
            }else if(opc==3){
                int x;
                printf("Tem certeza que deseja que deseja remover o usuario?\n");
                printf("1 - sim\n");
                printf("2 - nao\n");
                scanf("%d",&x);
                fflush(stdin);
                if(x==1){
                    printf("Registro do jogador foi removido com sucesso!");
                }else{
                    printf("Operacao cancelada!");
                
                }
                
            }else if(opc==4){
                printf("Saindo do menu de alteracao.");
            }else{
                printf("Opcao invalida!");
            }
        }while(opc!=3);
       

    }


}