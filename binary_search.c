
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>
void display(int arr[],int size){
    for(int i = 0; i<size ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int binarysearch(int arr[], int size, int element){
    int low,mid,high;
    low = 0;
    high = size-1;

   

    while(low<high){
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
        }
        else if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}
int main() {
    int arr[30] = {1,2,3,4,5,6,7,8,9,10,12,13,23,24,45};
    int size = 15;
    
    display(arr,size);
    
    int element = 45;
    int indexsearch = binarysearch(arr,size,element);
    printf("The element %d was found at index %d element ",element,indexsearch);

    return 0;
}

