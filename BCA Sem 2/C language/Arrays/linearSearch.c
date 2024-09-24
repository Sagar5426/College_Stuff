#include <stdio.h>

int linearSearch(int arr[], int key, int size){
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
    printf("Enter %d elements for the array: ", size);
    for(int i = 0; i<size; i++){
        scanf("%d", &numbers[i]);
    }

    printf("Enter key element: ");
    scanf("%d", &key);

    int index = linearSearch(numbers,key,size);
    if(index==-1){
        printf("Key not found!");
    }else{
    printf("Key found at postion: %d", (index+1));
    }
}





