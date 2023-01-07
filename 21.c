#include <stdio.h>
#include <math.h>

long long int factorial(long long int num) {
    if (num == 0 || num == 1) return 1;
    else if (num == -1) return -1;
    else if (num > 0) {
        return num * factorial(num - 1);
    } else {
        return -1 * (abs(num) * factorial(abs(num) - 1));
    }
}

int main() {

    long long int num;
    printf("\nEnter Number to Find Factorial of : ");
    scanf("%lld", &num);
    printf("\nFactorial is %lld", factorial(num));

    return 0;
}