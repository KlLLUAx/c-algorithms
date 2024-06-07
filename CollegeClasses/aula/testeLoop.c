#include<stdio.h>

void main(){
    int n = 1;
  /*  do{
        printf("Informe um numero para vericar se é  par ou impar: \n");
        scanf("%d",&n);
        if(n%2==0){
            printf("\n%d é par\n",n);
        }else{
            printf("%d é  impar\n",n);
        }
    }while(n>0);*/
   /* while(n>=0){
         printf("Informe um numero para vericar se é  par ou impar: \n");
        scanf("%d",&n);

        if(n%2==0){
            if(n>=0){
             printf("\n%d é par\n",n);
            }
           
        }else if(n%2!=0){
            if(n>=0){
            printf("%d é impar\n",n);  
            }
            
        }

    }*/
    /* for(int n = 1; n>=0;n=n){
        scanf("%d",&n);
        if(n%2==0){
            if(n>=0)
            printf("\npar");
        }else{
            if(n>=0)
            printf("\nimpar");
        }

    }*/
    int cont=0;
    for(int i = 0; i<=15; i++){
        scanf("%d",&n);
        if(n>30){
            cont++;
        }
            
    }
    printf("%d",cont);
}