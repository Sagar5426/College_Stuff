#include <stdio.h>
void selectionSort(int arr[],int size){
    for(int i = 0; i < size-1; i++){
    int minIndex = i;
    for(int j = i+1; j < size; j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
        }
        if(minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

void main(){
    int numbers[] = {5,2,6,76,86};
    selectionSort(numbers,5);
    printArray(numbers,5);
}