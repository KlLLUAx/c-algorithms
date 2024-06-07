#include<stdio.h>

void main(){
    int secretNumber = 10;
    int guess = 0;
    int guessCount = 0;
    int outOfGuess = 0;
    while(guess!=secretNumber && outOfGuess == 0){
        if(guessCount < 3){
            printf("Enter a number:\n");
            scanf("%d",&guess);
            guessCount++;
            
        }else{
            printf("You are out of guesses\n");
            outOfGuess = 1;
        }
    }
    if(outOfGuess == 1){
        printf("You lose!\n");
        printf("The secret number was %d\n ",secretNumber);
    }else{
        printf("You win!");
    }
}