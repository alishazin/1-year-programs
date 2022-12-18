#include <stdio.h>
#include <math.h>

int main() {
	
	int num1, num2;
	
	printf("\nEnter 2 Numbers : ");
	scanf("%d %d", &num1, &num2);
	
	fflush(stdin);
	
	char opr;
	printf("\nEnter Operator (+ - x / %% ^) : ");
	scanf("%c", &opr);
	
	switch (opr) {
		
		case '+':
			printf("\nAddition: %d", num1 + num2);
			break;
			
		case '-':
			printf("\nSubtraction: %d", num1 - num2);
			break;
			
		case 'x':
			printf("\nMultiplication: %d", num1 * num2);
			break;
			
		case '/':
			printf("\nDivision: %0.2f", (float)num1 / (float)num2);
			break;
			
		case '%':
			printf("\nModulus: %d", num1 % num2);
			break;
			
		case '^':
			printf("\nPower: %f", pow(num1, num2));
			break;
			
		default:
			printf("\nInvalid Operator");
			break;
	
	}
	
	
	return 0;
}
