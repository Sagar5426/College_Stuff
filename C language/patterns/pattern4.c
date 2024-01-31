#include <stdio.h>

void main() {
    int num_rows = 10;
    int num_cols = 10;

    // Iterate over each row
    for (int i = 1; i <= num_rows; i++) {
        // Iterate over each column
        for (int j = 2; j <= num_cols; j++) {
            int product = i * j;
            printf("%3d ", product); 
        }
        printf("\n");
    }
}


// 2 3 4  5  6  7  8  9  10
// 4 6 8  10 12 14 16 18 20
// 6 9 12 15 18 21 24 27 30   