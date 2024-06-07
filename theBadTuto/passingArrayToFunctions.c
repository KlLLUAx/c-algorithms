#include<stdio.h>
#include<math.h>

void powpow(int arr[],int value);
void main(){
    int array[] = {2,4,5,3,7};
    int power;

    printf("Enter a number to raise the numbers into the array: ");
    scanf("%d",&power);
    powpow(array,power);
}
void powpow(int arr[], int value){
    for( int i = 0; i<5; i++){
        printf("%.2f ", pow(arr[i],value));//the pow function always return a float.

    }

}