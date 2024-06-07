#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#define tamanho 3 

int tabuleiro[tamanho][tamanho];
int movimento = 0;
int x_branco = 0, y_branco = 0;
void imprime_tabuleiro(){

}
void inicia_variavel(){

}
int verifica_se_ganhou(){
    return 0;
}
void embaralha_tabuleiro(){

}
int solicita_movimento(){
while(1){

}
return 0;

}

int main(){
    printf("Jogo 8 quadrados\n\n");
    iniciarliaz_variaveis();
    embaralha_tabuleiro();

    //Enquanto jogador não vencer o jogo continua rodando
    while(1){
        int solucao = verifica_se_ganhou();
        if(solucao == 1){
            imprime_tabuleiro();
         printf("parabens, você venceu! Total movimentos:%d ",movimento);
            break; //encerra o jogo

        }else{
            int lance_valido = 0;
            imprime_tabuleiro();
            int jogada = solicita_movimento();
            lance_valido = atualiza_tabuleiro(jogada);
            
        }
        return 0;
    }

}