#include <stdio.h>

#define size 4

int stack[size];
int leftTop = -1;
int rightTop = size;

void insertion(int element, char choice) {
    if (leftTop+1 == rightTop) {
        printf("Overflow can't insert %d \n", element);
        return;
    }

    if (choice == 'l') {
        leftTop++;
        stack[leftTop] = element; 
    } else if (choice == 'r') {
        rightTop--;
        stack[rightTop] = element;
    } else {
        printf("Invalid input");
    }
}

void deletion(char choice) {
    if (leftTop == -1 || rightTop == size) {
        printf("Underflow\n");
    }
    if (choice == 'l') {
        stack[leftTop] = 0;
        leftTop--;
    } else if (choice == 'r') {
        stack[rightTop] = 0;
        rightTop++;
    } else {
        printf("Invalid Input");
    }
}

void printStack() {
    printf("Stack: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void main() {
    insertion(5, 'l');
    insertion(10, 'l');
    insertion(15, 'r');
    insertion(20, 'r');
    deletion('r');
    insertion(25,'r');
    
    printStack();
    
    
}

