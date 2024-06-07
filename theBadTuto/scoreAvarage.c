#include<stdio.h>

void main(){
    int i;
    int score[5];
    float avarege;
    float total;
    for(i=0;i<5;i++){
        printf("Enter the score: ");
        scanf("%d",&score[i]);
        total+= score[i];
    }
    avarege = total/5;

    printf("The avarege of the scores is: %.2f",avarege);
    
}