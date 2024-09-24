#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * insertAtFirst(struct node *head,int element){
    struct node * ptr  = (struct node *) malloc (sizeof(struct node));
    ptr -> data = element;
    ptr -> next = head;
    return ptr;
}
void printLL(struct node * head){
    printf("Linked list: ");
    struct node * p = head;
    while(p != NULL){
        printf("%2d ", p->data);
        p = p -> next;
    }
    printf("\n");
}

int countElementInLL(struct node * head){
    int count = 0;
    struct node * p = head;

    while(p != NULL){
        p = p -> next;
        count++;
    }
    return count;
}

struct node * first = NULL;
struct node * second = NULL;

void splitLL(struct node *head) {
    int counter = countElementInLL(head) / 2;
    struct node *p = head;
    int starter = 0;

    while (p != NULL) {
        // Create a new node for each iteration
        struct node *ptr = (struct node *) malloc(sizeof(struct node));
        ptr->data = p->data;
        ptr->next = NULL;

        // making first node
        if (starter < counter) {
            if (first == NULL) {
                first = ptr;
            } else {
                struct node *temp = first;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = ptr;
            }
            starter++;
        } else { // second node
            if (second == NULL) {
                second = ptr;
            } else {
                struct node *temp = second;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = ptr;
            }
        }
        p = p->next; // Move to the next node
    }

    printf("first node: ");
    printLL(first);

    printf("second node: ");
    printLL(second);
}





void main(){
    struct node * head = NULL;

    head = insertAtFirst(head,6);
    head = insertAtFirst(head,5);
    head = insertAtFirst(head,4);
    head = insertAtFirst(head,3);
    head = insertAtFirst(head,2);
    head = insertAtFirst(head,1);
    printLL(head);

    splitLL(head);

}