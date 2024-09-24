// Q1. If array unsorted then use linearSearch and if sorted then use BinarySearch
#include <stdio.h>
#include <stdbool.h>
bool isSorted(int arr[],int size){
    bool ifSorted = true;
    for(int i = 0; i < size-1; i++){
        if(arr[i] > arr[i+1]){
            ifSorted = false;
            return false;
        }
    }
    return ifSorted;
}

int binSearch(int arr[],int size,int key){
    int start = 0, end = size-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}

int linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

void main(){
    int size, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int numbers[size];
    printf("Enter upto %d elements for array: ",size);
    for(int i = 0; i < size; i++){
        scanf("%d",&numbers[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d",&key);
    if(isSorted(numbers,size)){
        printf("Binary Search: \n");
        printf("Key Index: %d",binSearch(numbers,size,key));
    }else{
        printf("Linear Search: \n");
        printf("Key Index: %d",linearSearch(numbers,size,key));
    }
}