#include <stdio.h>

int main() {
	int a=20;
	int b=10;
	int c=15;
	int d=5;
	float e;
	clrscr();

	e = (a+b) * c / d;
	printf("\nValue of (a+b) * c / d is %0.2f", e);

	e = ((a+b) * c) / d;
	printf("\nValue of ((a+b) * c) / d is %0.2f", e);

	e = (a+b) * (c / d);
	printf("\nValue of (a+b) * (c / d) is %0.2f", e);

	e = (a+ (b * c) / d);
	printf("\nValue of (a+b) * (c / d) is %0.2f", e);

	return 0;

}