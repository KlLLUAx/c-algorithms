#include<stdio.h>

void main(){
    int i,j;
    int arr [4] [4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    for(i = 0 ;i<4 ;i++ ){
        for(j=0 ;j<4 ;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}