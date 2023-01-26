#include <stdio.h>

int findFactorial(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return n * findFactorial(n - 1);
    }
}

int main() {

    int num, factorial = 1, i;

    printf("Enter the number to find the factorial : ");
    scanf("%d", &num);

    for (i = num; i > 0; i--) {
        factorial *= i;
    }
    printf("\nFactorial using for loop : %d", factorial);

    factorial = 1;
    i = num;

    while (i > 0) {
        factorial *= i;
        i--;
    }
    printf("\nFactorial using while loop : %d", factorial);

    factorial = 1;
    i = num;

    do {
        factorial *= i;
        i--;
    } while (i > 0);
    printf("\nFactorial using do while loop : %d", factorial);

    printf("\nFactorial using recursive functions : %d", findFactorial(num));

    return 0;
}