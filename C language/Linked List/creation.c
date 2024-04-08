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

void main(){
    struct Node *head;
    struct Node *second;
    struct  Node *third;

    // Allocate memory for nodes in the linked list in Heap
            //typecast
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));

    // Link first and second node
    head -> data = 7;                // -> used to access struct property
    head -> next = second;

    // Link second and third node
    second -> data = 8;
    second -> next = third;

    // Terminate list at third node
    third -> data = 9;
    third -> next = NULL;

    linkedListTraversal(head);
}




