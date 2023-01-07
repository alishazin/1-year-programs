#include <stdio.h>

float findSum() {
    float num1, num2, sum;

    printf("\nEnter two numbers to find sum: ");
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    return sum;
}

int main() {

    float sum = findSum();

    printf("\nSum: %0.2f", sum);

    return 0;
}