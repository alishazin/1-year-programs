#include <stdio.h>
#define PI 3.14

int main() {
	
    int radius;

    printf("\nEnter Radius Length : ");
    scanf("%d", &radius);

    printf("\nArea of circle is %0.2f", PI * radius * radius);

	return 0;
}
