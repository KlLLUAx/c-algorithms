#include<stdio.h>

int add(int,int);
void main(){
    int a,b,result;
    printf("Type the numbers to add");
    scanf("%d%d",&a,&b);
    result = add(a,b);
    printf("the result is: %d ",result);

}
int add(int x, int y){
    int z = x + y;

    return z;
}