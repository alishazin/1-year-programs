#include <stdio.h>
#include <conio.h>

int main() {

	char a;
	char name[20];

	printf("\nEnter a character (by getch()): ");
	a = getch();
	// will not wait for enter, cannot see character on screen while
	// typing.

	printf("\n%c", a);

	printf("\nEnter a character (by getche()): ");
	a = getche();
	// will not wait for enter, can see character while typing.

	printf("\n%c", a);

	printf("\nEnter a character (by getchar()): ");
	a = getchar();
	// will wait for enter, can see character while typing

	printf("\n%c", a);
	
	
	fflush(stdin);
	// to skip the \n in the buffer

	printf("\nEnter name: ");
	gets(name);
	printf("\nYour name is ");
	puts(name);

	return 0;
}
