#include <stdio.h>

void deletion(int arr[], int size, int index) {

    if(index < 0 || index > size){
        printf("Invalid index");
        return;
    }
    // delete--Shifting left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // print
    printf("Updated Array: ");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
}

void main() {
    int size, index;

    printf("Enter the size for array: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter %d elements for array: ",size);
    for(int i = 0; i < size; i++){
        scanf("%d",&numbers[i]);
    }

    printf("Enter the index of element you want to delete: ");
    scanf("%d", &index);

    deletion(numbers,size,index);
    

}
