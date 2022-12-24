#include <stdio.h>

int main() {

    int num, factorial;

    printf("\nEnter number to find the factorial: ");
    scanf("%d", &num);
    factorial = num;

    int i = num-1;
    while (i > 0) {
        factorial *= i;
        i--;
    }

    printf("\nFactorial of %d is %d", num, factorial);

    return 1;
}