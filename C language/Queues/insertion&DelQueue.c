#include <stdio.h>

int front = -1;
int rear = -1;

void insertion(int queue[],int size,int element){

    if(rear == size-1 ){
        printf("Queue Overflow\n");
        return;
    }else{
        if(rear == -1 && front == -1){
            rear = 0; front = 0;
        }else{
            rear += 1;
        }
        queue[rear] = element;
    }
}

delQueue(int queue[],int size){
    if(size == -1){
        printf("Queue is Empty");
        return;
    }else{
        if(front == rear){
            front = -1; rear = -1;
        }else{
            front+=1;
        }
    }
}

void printQueue(int queue[],int size){
    printf("Queue Elements: ");

    if (front == -1 && rear == -1){
        printf("Empty\n");
        return;
    }

    for(int i = front; i <= rear; i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
void main(){
    int n = 8;
    int queue[n];

    insertion(queue,n,5);
    insertion(queue,n,8);
    insertion(queue,n,10);
    delQueue(queue,n);

    printQueue(queue,n);

}




