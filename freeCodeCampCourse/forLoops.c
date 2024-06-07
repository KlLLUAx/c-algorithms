#include<stdio.h>

void main(){

int nums[3][2] = {{2,3},{1,4},{3,2}};
int i,j;
for(i = 0;i<3;i++){
    for(j = 0; j<2 ;j++){
        printf("%d,",nums[i][j]);
    }
    printf("\n");
}

}