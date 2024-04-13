#include <stdio.h>

// Deque is of two types:-

// 1) Input Restricted Deque- It is a queue in which insertion is done at rear but 
//    but deletion is allowed from both the ends that is either from front or rear.

// 2) Output-Restricted Deque: This type of deque allows insertion from both ends, 
// namely the front and the rear. However, deletion is restricted to only the rear end.

int front = -1, rear = -1;

void insertionInputResDeque(int queue[], int size, int element){

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

void delInputResDeque(int queue[],int size,char choice){
    if(front == -1){
        printf("Deque Underflow");
        return;
    }else{
        if(choice == 'r'){
            rear = (rear-1 + size) % size; // for rear = 0 case 
        }else if(choice == 'f'){
            front = (front+1) % size;
        }else{
            printf("Wrong input\n");
            return;
        }

        if(front == (rear+1)%size){
            front = -1; rear = -1;
        }
    }
}

void main(){
    int n = 5;
    int deque[n];

    insertionInputResDeque(deque,n,10);
    insertionInputResDeque(deque,n,20);
    insertionInputResDeque(deque,n,30);
    insertionInputResDeque(deque,n,40);
    delInputResDeque(deque,n,'r');
    delInputResDeque(deque,n,'f');
    printDeque(deque,n);
    
}