
#include <stdio.h>

void main()
{
    double fTemp = 0;/* armazena a temperatura em Fahrenheit*/
    double x = 0;/*armazena o resultado da formula que converte a temperatura*/
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%lf",&fTemp);/* recebe um double*/
    x = (fTemp-32)/1.8;/*algoritimifica a formula C = (F-32)/1.8 */
printf("%f graus Fahrenheit equivalem a %f graus Celsius",fTemp,x);/*Exibe o resultado*/

}