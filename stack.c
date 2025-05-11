
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1; 


void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Unable to push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to pop.\n");
    } else {
        
        printf("%d popped from the stack.\n", stack[top--]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
            
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! \n");
        }
    }
}

