#include <stdio.h>

int main() {
	
	int num1, num2, num3;
	
	printf("\nEnter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 >= num2) {
		if (num1 >= num3) {
			printf("\nNum1 is big");
		} else {
			printf("\nNum3 is big");
		}
	} else if (num2 >= num3) {
		printf("\nNum2 is big");
	} else {
		printf("\nNum3 is big");
	}
	
	return 0;
}
