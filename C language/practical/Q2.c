#include <stdio.h>

void sumOfAllOddAndEven(int arr[],int size){
    int evenSum = 0, oddSum = 0;

    for(int i = 0; i < size; i++){
        if(arr[i]%2 == 0){
            evenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }

    printf("Even Sum: %d", evenSum);
    printf("\n");
    printf("Odd Sum: %d", oddSum);

}

void main(){
    int nums[] = {1,2,3,4,5,6};
    sumOfAllOddAndEven(nums,6);
}