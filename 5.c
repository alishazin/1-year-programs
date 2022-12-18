#include <stdio.h>

int main() {
	int num1, num2;

	printf("\nEnter Numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("\nSum: %d", num1 + num2);
	printf("\nDifference: %d", num1 - num2);
	printf("\nMultiplication: %d", num1 * num2);
	printf("\nDivision: %0.2f", (float)num1 / (float)num2);
	printf("\nModulus: %d", num1 % num2);

	return 0;
}