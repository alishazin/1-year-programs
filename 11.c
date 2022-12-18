#include <stdio.h>

int main() {
	
	int num1, num2;
	
	printf("\nEnter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	num1++;
	num2--;
	
	printf("\nnum1 = %d (incremented), num2 = %d (decremented)", num1, num2);
	
	return 0;
}
