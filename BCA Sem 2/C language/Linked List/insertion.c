#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

//func returns a struct
struct Node *insertAtFirst(struct Node *head,int data){
    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr; //now ptr is new head
}

struct Node *insertAtIndex(struct Node *head, int data, int index){
    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
    struct Node *p = head; //previous Index node
    int i = 0;

    while(i != index-1){
        p = p -> next;
        i++;
    }

    ptr -> data = data;
    ptr -> next = p -> next; //assigning our node next(address) to previous index node next(address) 
    p -> next = ptr;

    return  head; //no changes in head
}

struct Node *insertAtEnd(struct Node *head, int data){
    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr -> data = data;
    struct Node *p = head;

    while (p -> next != NULL){
        p = p -> next;
    }
    p -> next = ptr;
    ptr ->next = NULL;
    return head;  //no change in head
}

void printLL(struct Node *ptr){
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
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));

    // Link first and second node
    head -> data = 10;                // -> used to access struct property
    head -> next = second;

    // Link second and third node
    second -> data = 20;
    second -> next = third;

    // Terminate list at third node
    third -> data = 30;
    third -> next = NULL;

    printLL(head);

    head = insertAtFirst(head,5);
    printf("\n");
    printLL(head);

    printf("\n");
    insertAtIndex(head,25,3);
    printLL(head);

    printf("\n");
    insertAtEnd(head,35);
    printLL(head);  
}




