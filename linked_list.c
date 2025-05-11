
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data; 
    struct node *next;   

};

struct node *head, *temp, *ptr; 

void insert(){
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value : ");
    scanf("%d",&temp->data); 
    temp->next = head;
    head = temp; 
    
}

void delete(){
    ptr = head; 
    head = head->next;
    printf("\nDeleted node is %d",ptr->data);
    free(ptr); 
    ptr = NULL;
    
}

void display(){
    ptr = head; 
    printf("\nLINKED LIST ---------> \n");
    while(ptr != NULL){
    printf("%d\n",ptr->data);
    ptr = ptr->next;
    }
}


int main(){
    int choice ;
    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter the values : ");
    scanf("%d",&head->data);
    head->next = NULL;

    while(1){
        printf("\n1. Insert \n2. Delete \n3.Display \n4.Exist \n\n");

        printf("Enter the choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break; 
            
        case 3:
            display();
            break;

        case 4:
            printf("Existing ........");
            break;
        
        default:
            printf("Invalid choice ......");
            break;
        }
    }

    return 0;
}