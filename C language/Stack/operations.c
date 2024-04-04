// Online C compiler to run C program online
#include <stdio.h>

int maxSize = 3;
int stack[3];
int top = -1;

void push(int element){
    if (top == maxSize - 1){
        printf("Stack Overflow error \n");
        return;
    }else{
        top++;
        stack[top] = element;
        printf("%d inserted to top at index %d \n",element,top);
    }
}

void pop(){
    if(top == -1){
        printf("Underflow");
    }else{
        top--;
    }
}

void peek(){
    if(top == -1){
        printf("Stack is empty");
    }else{
        printf("element at top is: %d", stack[top]);
    }
}

void main() {
    push(7);
    push(8);
    push(9);
    pop();
    push(10);
    peek();

}