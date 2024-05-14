#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void printLL(struct Node *ptr){
    printf("Elements: ");
    while(ptr != NULL){
        printf("%d ",ptr -> data);
        ptr = ptr -> next; 
    }
}

struct Node * even = NULL;
struct Node * odd = NULL;

void splitOddAndEven(struct Node *head) {
    struct Node *p = head;
    while(p != NULL) {
        struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
        int curr = p->data;
        ptr->data = curr;
        ptr->next = NULL;

        if(curr % 2 == 0) {
            if(even == NULL) {
                even = ptr;
            } else {
                struct Node *temp = even;
                while(temp->next != NULL)
                    temp = temp->next;
                temp->next = ptr;
            }
        } else {
            if(odd == NULL) {
                odd = ptr;
            } else {
                struct Node *temp = odd;
                while(temp->next != NULL)
                    temp = temp->next;
                temp->next = ptr;
            }
        }
        p = p->next;
    }

    // Print even list
    printf("\nEven list: ");
    printLL(even);

    // Print odd list
    printf("\nOdd list: ");
    printLL(odd);
}

void main(){
    struct Node *head;
    struct Node *second;
    struct  Node *third;
    struct  Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
            //typecast
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));
    fourth = (struct Node *) malloc (sizeof(struct Node));

    // Link first and second node
    head -> data = 1;                // -> used to access struct property
    head -> next = second;

    // Link second and third node
    second -> data = 2;
    second -> next = third;

    // Terminate list at third node
    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = NULL;

    printLL(head);

    splitOddAndEven(head);

}




