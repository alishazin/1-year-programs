#include <stdio.h>

int main() {
	
	int num1, num2;
	
	printf("\nEnter two numbers: ");
	scanf("%d %d", &num1, &num2);
	// 11 12
	
	printf("\n(AND) %d & %d = %d", num1, num2, num1 & num2);
	/*
		8421
		----
		1011
		1100
		----
		1000 => 8
	*/
	
	printf("\n(OR)  %d & %d = %d", num1, num2, num1 | num2);
	/*
		8421
		----
		1011
		1100
		----
		1111 => 15
	*/
	
	printf("\n(XOR) %d & %d = %d", num1, num2, num1 ^ num2);
	/*
		8421
		----
		1011
		1100
		----
		0111 => 7
	*/
	
	
	return 0;
}
