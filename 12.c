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
	
	printf("\n(Shift Right) %d >> 1 = %d", num1, num1 >> 1);
	/*
		8421
		----
		1011 >> 1
		0101 => 5
	*/
	
	printf("\n(Shift Left) %d << 1 = %d", num1, num1 << 1);
	/*
	 16 8421
	 --	----
		1011 >> 1
	  1 0110 => 22
	*/
	
	return 0;
}
