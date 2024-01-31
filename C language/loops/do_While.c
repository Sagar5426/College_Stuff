#include <stdio.h>

void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n", n, i, n * i);
    }
}

void main() {
    char choice;
    int n;
    printf("Which number table do you want?: ");
    scanf("%d", &n);

    do {
        printTable(n);
        printf("Do you want to print the table? \nEnter y or n: ");
        scanf(" %c", &choice); 
        if (choice == 'y') {
            printf("Which number table do you want?: ");
            scanf("%d", &n);
        }
    } while (choice == 'y');
}
