#include <stdio.h>

int main() {
	
	int num1, num2, num3;
	
	printf("\nEnter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 >= num2 && num1 >= num3) {
		printf("\nNum1 is Big");
	} else if (num2 >= num1 && num2 >= num3) {
		printf("\nNum2 is Big");
	} else if (num3 >= num2 && num3 >= num1) {
		printf("\nNum3 is Big");
	}
	
	return 0;
}
