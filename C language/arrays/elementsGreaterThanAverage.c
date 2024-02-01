#include <stdio.h>
int elementGreaterThanAverage(int arr[],int size){
    int count = 0, sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    int average = sum/size;
    for(int i = 0; i<size; i++){
        if (arr[i]>average){
            count++;
        }  
    }
    return count;
}
void main(){
    int arr[] = {1,7,15,6,8};
    printf("%d ", elementGreaterThanAverage(arr,5));
}