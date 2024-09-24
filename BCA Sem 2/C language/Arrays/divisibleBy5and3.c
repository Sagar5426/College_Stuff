#include <stdio.h>

int countDivisibleByFiveAndThree(int start, int end) {
    int count = 0;

    // Validate the range
    if (start > end) {
        printf("Invalid range!\n");
        return -1; // Return -1 to indicate an error
    }


    for (int i = start; i <= end; i++) {
        if (i % 5 == 0 || i % 3 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int start, end;

    // Input start and end of the range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Call the function and get the result
    int result = countDivisibleByFiveAndThree(start, end);

    // Output the result
    if (result != -1) {
        printf("The count of numbers divisible by both 5 and 3 in the range [%d, %d] is: %d\n", start, end, result);
    }

    return 0;
}
