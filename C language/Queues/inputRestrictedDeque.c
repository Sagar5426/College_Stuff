#include <stdio.h>

// Deque is of two types:-

// 1) Input Restricted Deque- It is a queue in which insertion is done at rear but 
//    but deletion is allowed from both the ends that is either from front or rear.

// 2) Output-Restricted Deque: This type of deque allows insertion from both ends, 
// namely the front and the rear. However, deletion is restricted to only the rear end.



int front = -1, rear = -1;

void insertionInputDeque(int queue[], int size, int element){

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

void delInputDeque(int queue[],int size,char choice){
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

    insertionInputDeque(deque,n,10);
    insertionInputDeque(deque,n,20);
    insertionInputDeque(deque,n,30);
    insertionInputDeque(deque,n,40);
    delInputDeque(deque,n,'r');
    delInputDeque(deque,n,'f');
    printDeque(deque,n);

    
}