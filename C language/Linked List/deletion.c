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

void linkedListTraversal(struct Node *ptr){
    printf("Elements: ");
    while(ptr != NULL){
        printf("%d ",ptr -> data);
        ptr = ptr -> next; 
    }
    printf("\n");
}

// Case 1: Deleting first element from the linked list
struct Node * deleteAtFirst(struct Node * head){
    struct Node * ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head,int index){
    struct Node * p = head;
    struct Node * q = head -> next;
    for(int i = 0; i < index-1; i++){
        p = p -> next;
        q = q -> next;
    }
    p -> next = q -> next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node * p = head;
    struct Node * q = head -> next;
    while(q -> next != NULL){
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
    return head;
}

// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteWithValue(struct Node * head,int key){
    struct Node * p = head;
    struct Node * q = head -> next;
    while(q -> data != key && q->next != NULL){
        p = p -> next;
        q = q -> next;
    }
    if(q->data == key){
    p -> next = q -> next;
    free(q);
    }
    return head;
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

    linkedListTraversal(head);

    head = insertAtFirst(head,5);
    linkedListTraversal(head);

    insertAtIndex(head,25,3);
    linkedListTraversal(head);

    insertAtEnd(head,35);
    linkedListTraversal(head); 

    printf("\n-------After deletion-------\n");
    head = deleteAtFirst(head); //delete 5
    linkedListTraversal(head);

    deleteAtIndex(head,1); //delete 20
    linkedListTraversal(head);

    deleteAtLast(head); //delete 35
    linkedListTraversal(head);

    deleteWithValue(head,25); //delete 25
    linkedListTraversal(head);

}




