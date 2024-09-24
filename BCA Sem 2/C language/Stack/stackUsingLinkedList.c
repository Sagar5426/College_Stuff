#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* push(struct Node* top, int element) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    
    ptr->data = element;
    ptr->next = top;
    return ptr; // ptr is new Top
}

struct Node* pop(struct Node * top){
    if(top == NULL){
        printf("Underflow!");
        return;
    }
    struct Node * ptr = top;
    top = top -> next;
    free(ptr);
    return top;
}
void printLL(struct Node * top){
    printf("Stack Elements: ");
    while(top != NULL){
        printf("%d ",top -> data);
        top = top -> next;
    }
    printf("\n");
}

void main() {
    struct Node* top = NULL; 

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);

    printLL(top);

    top = pop(top);
    printLL(top);

}
