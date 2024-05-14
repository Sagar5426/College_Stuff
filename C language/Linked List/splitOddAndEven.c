#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to insert a node at the beginning of the linked list
struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr; // now ptr is the new head
}

// Function to insert a node at a specified index in the linked list
struct Node *insertAtIndex(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head; // previous index node
    int i = 0;

    while (i != index - 1) {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next; // assigning our node's next(address) to previous index node's next(address)
    p->next = ptr;

    return head; // no changes in head
}

// Function to insert a node at the end of the linked list
struct Node *insertAtEnd(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head; // no change in head
}

// Function to traverse the linked list and print elements
void linkedListTraversal(struct Node *ptr) {
    printf("Elements: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

// Function to split the linked list into two separate lists for odd and even numbers
void splitOddEven(struct Node *head, struct Node **evenHead, struct Node **oddHead) {
    struct Node *evenTail = NULL;
    struct Node *oddTail = NULL;
    struct Node *current = head;

    while (current != NULL) {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = current->data;
        newNode->next = NULL;

        if (current->data % 2 == 0) {
            if (*evenHead == NULL) {
                *evenHead = newNode;
                evenTail = *evenHead;
            } else {
                evenTail->next = newNode;
                evenTail = evenTail->next;
            }
        } else {
            if (*oddHead == NULL) {
                *oddHead = newNode;
                oddTail = *oddHead;
            } else {
                oddTail->next = newNode;
                oddTail = oddTail->next;
            }
        }
        current = current->next;
    }
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second node
    head->data = 10; // -> used to access struct property
    head->next = second;

    // Link second and third node
    second->data = 21;
    second->next = third;

    // Terminate list at third node
    third->data = 30;
    third->next = NULL;

    linkedListTraversal(head);
    printf("\n");

    struct Node *evenHead = NULL;
    struct Node *oddHead = NULL;

    splitOddEven(head, &evenHead, &oddHead);

    printf("Printing odd elements:\n");
    linkedListTraversal(oddHead);
    printf("\n");

    printf("Printing even elements:\n");
    linkedListTraversal(evenHead);
    printf("\n");

    return 0;
}
