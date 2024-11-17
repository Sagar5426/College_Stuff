#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int si, int mid, int ei) {
    int temp[ei - si + 1];
    int i = si;       // Iterator for the left part
    int j = mid + 1;  // Iterator for the right part
    int k = 0;        // Iterator for the temp array

    // Merge the two halves
    while (i <= mid && j <= ei) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Remaining elements from the left part
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Remaining elements from the right part
    while (j <= ei) {
        temp[k++] = arr[j++];
    }

    // Copy temp back to the original array
    for (k = 0, i = si; i <= ei; i++, k++) {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int si, int ei) {
    // Base case: If the start index is greater or equal to the end index
    if (si >= ei) return;

    int mid = (si+ei) / 2;

    // Recursively sort the left and right halves
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    // Merge the sorted halves
    merge(arr, si, mid, ei);
}

int main() {
    int numbers[] = {6, 3, 9, 5, 2, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original Array: ");
    printArray(numbers, size);

    mergeSort(numbers, 0, size - 1);

    printf("Sorted Array: ");
    printArray(numbers, size);

    return 0;
}
