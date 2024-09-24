#include <stdio.h>

void insertion(int arr[], int size, int element, int index) {

    if (index < 0 || index > size) {
        printf("Invalid Index");
        return;
    }

    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i]; // shifting to right
    }
    arr[index] = element;

    printf("Updated Array: ");
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void main() {
    int size, element, index;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size + 1];

    printf("Enter the %d elements for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter Index where you want to insert the element: ");
    scanf("%d", &index);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertion(numbers, size, element, index);
}
