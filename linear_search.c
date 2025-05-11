
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>
void display(int arr[], int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int linear_search(int arr[], int size, int element){
    for(int i = 0; i<size;i++){
        if(arr[i] == element){
            return i;
        }
    }
            return -1;
}
int main() {
  
    int arr[50] = {12,32,42,52,41} ;
    int size = 5;
    display(arr,size);
    int element = 52;
     
     linear_search(arr,size,element);
    
     printf("The element %d was found at index %d ",element, linear_search(arr,size,element));
     return 0;
}