#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand((unsigned)time(NULL));
printf("limite max sorteio[0,%d]\n",RAND_MAX);
printf("1 numero sorteado: %d\n",((rand()%10)+1));
printf("2 numero sorteado: %d\n",((rand()%10)+1));
printf("3 numero sorteado: %d\n",((rand()%10)+1));
printf("4 numero sorteado: %d\n",((rand()%10)+1));
printf("5 numero sorteado: %d\n",((rand()%10)+1));
printf("6 numero sorteado: %d\n",((rand()%10)+1));
    return 0;
}