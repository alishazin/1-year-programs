#include <stdio.h>

void findSum(float num1, float num2) {
    float sum = num1 + num2;
    printf("\nSum: %0.2f", sum);
}

int main() {

    float num1, num2;

    printf("\nEnter two numbers to find sum: ");
    scanf("%f %f", &num1, &num2);

    findSum(num1, num2);

    return 0;
}