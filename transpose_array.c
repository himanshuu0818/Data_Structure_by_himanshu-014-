
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>

int main() {
    
    int original[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int transpose[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = original[i][j];
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", original[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
