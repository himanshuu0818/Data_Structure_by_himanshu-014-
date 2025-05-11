
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

int search(struct Node* root, int key) {
    if (root == NULL)
        return 0;
    if (root->data == key)
        return 1;
    else if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    struct Node* root = NULL;
    int elements[] = {50, 30, 20, 40, 70, 60, 80};
    int n = sizeof(elements) / sizeof(elements[0]);

    for (int i = 0; i < n; i++)
        root = insert(root, elements[i]);

    int key;
    printf("Enter a number to search: ");
    scanf("%d", &key);

    if (search(root, key))
        printf("Found!\n");
    else
        printf("Not Found!\n");

    return 0;
}
