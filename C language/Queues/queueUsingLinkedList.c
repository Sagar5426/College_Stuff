#include <stdio.h>
#include <stdlib.h>
 
struct Node *f = NULL;
struct Node *r = NULL;
 
struct Node{
    int data;
    struct Node *next;
};
 
void printLL(struct Node *ptr){
    printf("Elements: ");
    while (ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
 
void insInQueUsingLL(int element){
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n -> data = element;
        n -> next = NULL;
        if(f==NULL){
            f=r=n; //pointing all towards one location
        }
        else{
            r->next = n;
            r = n; //rear updated as n
        }
    }
}
 
void delInQueUsingLL(){
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        free(ptr);
    }
}
 
void main(){

    insInQueUsingLL(34);
    insInQueUsingLL(4);
    insInQueUsingLL(7);
    insInQueUsingLL(17);
    delInQueUsingLL();
    
    printLL(f);
}
