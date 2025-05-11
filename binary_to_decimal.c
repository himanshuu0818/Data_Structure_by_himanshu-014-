
    //  Name --> Himanshu
   // Roll No. --> 24/SCA/BCA/014
#include <stdio.h>
#include <math.h>

int main() {
    long binary;
    int decimal = 0, i = 0, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        digit = binary % 10;
        if (digit != 0 && digit != 1) {
            printf("Invalid binary number.\n");
            return 1;
        }
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Convert in Decimal = %d\n", decimal);
    return 0;
}
