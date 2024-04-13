#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    printf("Elements: ");
    while(ptr != NULL){
        printf("%d ",ptr -> data);
        ptr = ptr -> next;
    }
}

struct Node *insertAtFirst(struct Node *head, int element){
    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));

    ptr -> data = element;
    ptr -> next = head;

    return ptr;
}

void main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;

    linkedListTraversal(head);
    printf("\n");

    head = insertAtFirst(head,5);
    linkedListTraversal(head);

}