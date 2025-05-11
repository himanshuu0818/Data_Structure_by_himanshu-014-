
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>
void display(int arr[], int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insert_array(int arr[], int size, int insert_element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    else{
        for(int i = size-1;i>=index;i--){ 
            arr[i+1] = arr[i];
        }
        arr[index] = insert_element;
        return 1;
    }
}

int main(){
    
    int arr[50] = {1,43,5,32};
    int size = 4;
    display(arr,size);
    int insert_element = 8;
    int capacity = 50;
    int index = 1;

    insert_array(arr,size,insert_element,capacity,index);
    size += 1;

    display(arr,size);

    return 0;
}