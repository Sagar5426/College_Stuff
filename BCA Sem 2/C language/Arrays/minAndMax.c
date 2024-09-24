#include <stdio.h>

void maxAndMin(int arr[],int size){
    int max = arr[0], min = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("Max: %d and Min: %d ",max,min);
}
void main(){
    int arr[] = {1,7,15,6,8};
    maxAndMin(arr,5);
}