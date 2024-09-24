#include <stdio.h>

void main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) { 
            printf("%d ", j);
        }
        printf("\n"); 
    }
}
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1