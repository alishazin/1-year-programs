#include <stdio.h>

int main() {

    int num, factorial;

    printf("\nEnter number to find the factorial: ");
    scanf("%d", &num);
    factorial = num;

    int i;
    for (i=num-1; i>0; i--) {
        factorial *= i;
    }

    printf("\nFactorial of %d is %d", num, factorial);

    return 1;
}