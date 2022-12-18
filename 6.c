#include <stdio.h>

int main() {

	int x, y;

    printf("\nEnter two numbers : ");
	scanf("%d %d", &x, &y);
	printf("\nBefore Swapping: x=%d y=%d", x, y);

	// Swapping
	x = x + y;
	y = x - y;
	x = x - y;
	printf("\nAfter Swapping: x=%d y=%d", x, y);

	return 0;

}