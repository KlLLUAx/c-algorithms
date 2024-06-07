#include<stdio.h>

void main(){

    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    printf("Wellcome to the MadLib Game\n");
    printf("Enter a color's name: ");
    scanf("%s",color);
    printf("Enter a plural noun: ");
    scanf("%s",pluralNoun);
    printf("Enter a celebrity´s name: ");
    scanf("%s%s",celebrityF,celebrityL);

    printf("Roses are %s \n",color);
    printf("%s are blue\n",pluralNoun);
    printf("I love %s %s. ",celebrityF,celebrityL);

    }