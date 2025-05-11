
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>
# define max_size 10 

int queue[max_size], front = -1, rear = -1;

void Enqueue(values){
    if(rear == max_size - 1){
        printf("Queue is overflow ");
    }
    
    if (front == -1) 
    front = 0;
    queue[++rear] = values;
    
    }

void Dequeue(){
     if(front == -1 || front > rear){
        printf("Queue is empty \n");
     }
     else{
        printf("%d delete in queue",queue[front]);
        front++;
     }
    }

void Display(){
    if(front == -1 || front > rear){
        printf("Queue is empty \n");

    } 
    else{
        printf("Queue element is : ");
        for(int i = front ; i <= rear; i++ ){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }   
}

int main(){

  int choice,values;
  while(1){
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exist\n");
    printf("Enter the choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
            printf("Enter the values : ");
            scanf("%d",&values);
            Enqueue(values);
            break;

    case 2: 
            Dequeue();        
            break;

    case 3:
            Display();
            break;    
            
    case 4:
            printf("Exist\n");
            
            return 0;
    
    default:
           printf("Invalid Number");
          
    }
  }

}