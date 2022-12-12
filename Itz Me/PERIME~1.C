#include <stdio.h>

int main() {
	float radius, Area;
	clrscr();

	printf("\nEnter radius: ");
	scanf("%f", &radius);

	Area = 3.14 * radius * radius;

	printf("\nArea of circle: %0.2f", Area);
	return 1;

}