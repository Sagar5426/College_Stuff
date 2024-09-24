#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to build the tree
struct Node* buildTree(int nodes[], int* index) {
    (*index)++;
    if (nodes[*index] == -1) {
        return NULL;
    }

    struct Node* newNode = createNode(nodes[*index]);
    newNode->left = buildTree(nodes, index);
    newNode->right = buildTree(nodes, index);

    return newNode; // Return starting root after the last recursion call
}

// Preorder traversal function
void preorder(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Inorder traversal function
void inOrder(struct Node* root) {
    if (root == NULL) {
        return;
    }

    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

// Postorder traversal function
void postOrder(struct Node* root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

int main() {
    int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int index = -1; // Initialize index
    struct Node* root = buildTree(nodes, &index); // Build the tree

    if (root != NULL) {
        printf("%d\n", root->data); // Print root node's data
    }

    printf("Preorder Traversal: "); 
    preorder(root);
    printf("\n");

    printf("InOrder Traversal: "); 
    inOrder(root);
    printf("\n");

    printf("PostOrder Traversal: "); 
    postOrder(root);
    printf("\n");

    return 0;
}
