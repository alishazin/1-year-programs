#include <stdio.h>

int main() {

    int num, factorial=1;

    printf("\nEnter number to find the factorial: ");
    scanf("%d", &num);

    int i = num;
    do {
        factorial *= i;
        i--;
    } while (i > 0);

    printf("\nFactorial of %d is %d", num, factorial);

    return 1;
}