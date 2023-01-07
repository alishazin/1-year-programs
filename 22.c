#include <stdio.h>

int main() {

    int num1, num2, sum;
    int *ptrNum1, *ptrNum2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    ptrNum1 = &num1;
    ptrNum2 = &num2;
    sum = *ptrNum1 + *ptrNum2;

    printf("\nnum1 = %d", num1);
    printf("\nptrNum1 = %u", ptrNum1);
    printf("\n&num1 = %u", &num1);
    printf("\n&ptrNum1 = %u", &ptrNum1);
    printf("\n*ptrNum1 = %d", *ptrNum1);

    printf("\n\nSum: %d", sum);

    return 0;
}