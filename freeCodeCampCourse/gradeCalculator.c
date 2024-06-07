#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double n1;
    double n2;
    double media;
   printf("Enter the first grade: ");
   scanf("%lf",&n1);
   printf("Enter the second grade: ");
   scanf("%lf",&n2);
    media = (n1+n2)/2;
   printf("The students grade is: %.2f",media);

    return 0;
}