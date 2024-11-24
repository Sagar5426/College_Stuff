#include <stdio.h>

void printArray(int arr[], int size) {

    printf("Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quickSort(int arr[], int si, int ei) {
    if(si >= ei) return;

    int pivotIndex = partition(arr, si, ei);

    quickSort(arr, si, pivotIndex-1);
    quickSort(arr, pivotIndex+1, ei);
}

int partition(int arr[], int si, int ei) {
    int pivot = arr[ei];
    int i = si - 1;

    for(int j = si; j < ei; j++) {
        if(arr[j] < pivot) {
            i++;
            // swap
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    i++;
    int temp = arr[ei];
    arr[ei] = arr[i];
    arr[i] = temp;

    return i;
}

int main() {
    int arr[] = {6, 3, 9, 8, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    printArray(arr, size);

    return 0;
}