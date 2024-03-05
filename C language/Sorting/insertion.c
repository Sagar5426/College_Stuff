#include <stdio.h>
void insertionSort(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        int curr = arr[i];
        int prevIndex = i-1;
        while(prevIndex >= 0 && arr[prevIndex] > curr){
            arr[prevIndex+1] = arr[prevIndex];
            prevIndex--;
        }
        arr[prevIndex+1] = curr;
    }
}
void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
void main(){
    int number[] = {5,4,1,2,3};
    insertionSort(number,5);
    printArray(number,5);
}