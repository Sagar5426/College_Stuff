#include <stdio.h>

int front = -1, rear = -1;

void insertionCirQue(int queue[],int size, int element){
    if(front == (rear+1)%size){
        printf("Queue Overflow\n");
        return;
    }else{
        if(front == -1 && rear == -1){
            front = 0; rear = 0;
        }else{
            rear = (rear+1)%size;
        }
        queue[rear] = element;
    }
}

void delCirQueue(int queue[],int size){
    if(front == -1 && rear == -1){
        printf("Queue Underflow\n");
        return;
    }else{
        if(front == rear){
            front = -1; rear = -1;
        }else{
            front = (front+1)%size;
        }
    }
}

void printQueue(int queue[], int size) {
    if (front == -1 && rear == -1) {
        printf("Queue is Empty\n");
        return;
    } else {
        printf("Queue Elements: ");
        for (int i = front; i != rear; i = (i + 1) % size) {
            printf("%d ", queue[i]);
        }
        printf("%d\n", queue[rear]); // Print the last element separately to avoid extra space
    }
}


void main(){
    int n = 3;
    int queue[n];
    insertionCirQue(queue,n,10);
    insertionCirQue(queue,n,20);
    insertionCirQue(queue,n,30);
    delCirQueue(queue,n);
    insertionCirQue(queue,n,6);
    printQueue(queue,n);
}