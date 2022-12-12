#include <stdio.h>

int main() {
	
	// Single line Comments
	
	/*
		multi-line 
		comments
	*/
	
	// Datatypes
	// integer = 10, 11, 12 => 4 Bytes
	// float = 10.12, 12.12 => 4 Bytes
	// double = 10.12 => 8 Bytes
	// char = '1', 'A' => 1 Bytes 'A' = 68
	// string = "Ali Sh" = ['A', 'l', 'i', ' ', 'S', 'h'] => 6 Bytes
	
	// Integer
	int a = 19;
	printf("\n%d", a); // format specifier
	printf("\nBytes = %d", sizeof(a));
	
	// Float
	float b = 20.1525364253;
	printf("\n%0.10f", b);
	printf("\nBytes = %d", sizeof(b));
	
	// double
	double c = 20.1525364253;
	printf("\n%0.10lf", c);
	printf("\nBytes = %d", sizeof(c));
	
	// char
	char d = 'A';
	printf("\n%c", d);
	printf("\n%d", d);
	printf("\nBytes = %d", sizeof(d));
	
	// string
	char e[5] = "Ali";
	printf("\n%s", e);
	printf("\nBytes = %d", sizeof(e));
	
	int age;
	
	printf("\nEnter your age: ");
	scanf("%d", &age);
	
	printf("%d", age);
	
//	age = 10
//	age ---> 10
	
	
	return 0;	
}
