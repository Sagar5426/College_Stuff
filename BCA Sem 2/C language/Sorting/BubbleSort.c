#include <stdio.h>

void bubbleSort(int arr[], int size){
    int totalSwap = 0;
    // bool isSwapped = false;
    for(int turn = 0; turn < size-1; turn++){
        for(int j = 0; j < size-1-turn; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // isSwapped = true;
                totalSwap++;
            }
        }
        // if(!isSwapped){break;}
    }
    printf(" Total number of swap: %d \n", totalSwap);
}
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
void main(){
    int numbers[] = {5,4,3,2,1};
    bubbleSort(numbers,5);
    printArray(numbers,5);
}