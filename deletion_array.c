
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>
void display(int arr[], int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void delete_array(int arr[], int size, int index){
    for(int i = index;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    
}
int main(){
    
    int arr[50] = {12,34,54,65,74,56};
    int size = 6;
    display(arr,size);
    int index = 0;
    delete_array(arr,size,index);
    size -= 1; 

    display(arr,size);

    return 0;
}