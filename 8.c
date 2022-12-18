#include <stdio.h>

int main() {
	int a,b,c,d;

    printf("\nEnter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
	float e;

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