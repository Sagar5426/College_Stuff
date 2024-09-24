#include <stdio.h>

#define size 8

int front = -1;
int rear = -1;

void insertion(int queue[], int element) {
    if (rear == size - 1) {
        printf("Queue Overflow\n");
        return;
    } else {
        if (rear == -1) {
            rear = 0; 
            front = 0;
        } else {
            rear += 1;
        }
        queue[rear] = element;
    }
}

void delQueue(int queue[]) {
    if (front == -1 && rear == -1) {
        printf("Queue Underflow\n");
        return;
    } else {
        if (front == rear) {
            front = -1; 
            rear = -1;
        } else {
            front += 1;
        }
    }
}

void printQueue(int queue[]) {
    printf("Queue Elements: ");

    if (front == -1 && rear == -1) {
        printf("Empty\n");
        return;
    }

    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int queue[size];

    insertion(queue, 5);
    insertion(queue, 8);
    insertion(queue, 10);
    delQueue(queue);
    printQueue(queue);

    return 0;
}
