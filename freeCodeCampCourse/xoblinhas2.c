#include<stdio.h>

struct card{
    int x;
};

typedef struct card Card;
void changeX(Card *c);
void main(){

Card c;
c.x =1;
Card *cprt = &c; 
printf("%d\n",c.x);
printf("%d\n",cprt->x);
changeX(cprt);
printf("%d\n",c.x);

}
void changeX(Card * c){
    c-> x = 12;
}