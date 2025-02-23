#include <stdio.h>

void printArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void quickSort(int arr[], int si, int ei) {
    // Base case: If the start index is greater than or equal to the end index, return
    if (si >= ei) return;

    // Partition the array and get the pivot index
    int pivotIndex = partition(arr, si, ei);

    quickSort(arr, si, pivotIndex - 1); // Left part
    quickSort(arr, pivotIndex + 1, ei); // Right part
}


int partition(int arr[], int si, int ei) {
    // Choose the pivot as the last element of the array
    int pivot = arr[ei];
    // Initialize an index to track elements smaller than pivot
    int i = si - 1; // 0 - 1 = -1


    for (int j = si; j < ei; j++) {
        if (arr[j] <= pivot) {
            i++;

            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    // Move the pivot element to its correct position
    i++;
    int temp = pivot;
    arr[ei] = arr[i];
    arr[i] = temp;

    // Return the index of the pivot element
    return i;
}

int main() {
    int arr[] = {6, 3, 9, 8, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);


    quickSort(arr, 0, size - 1);

    printArray(arr, size);

    return 0;
}
