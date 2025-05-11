   
   //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014

#include <stdio.h>
int main(){
    int arr[] = {12,13,33,44,21};
    int size = 5;

    float sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    printf("Sum of Array : %.2f\n",sum);

    float average = sum/size;

    printf("Average of Array :%.2f",average);

    return 0;
}