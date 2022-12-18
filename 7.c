#include <stdio.h>

int main() {

    int num;

    printf("\nEnter a number : ");
    scanf("%d", &num);

    if (num%2 == 0) {
        printf("\nDivisible by 2");
    } else {
        printf("\nNot Divisible by 2");
    }

    return 1;
}