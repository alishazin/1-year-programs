#include <stdio.h>
#include <stdlib.h>

char *inputStr(char *askStr) {
	char *string = malloc(sizeof(char*));
	printf("%s", askStr);
	scanf("%s", string);
	return string;
}

int inputInt(char *askStr) {
	int num;
	printf("%s", askStr);
	scanf("%d", &num);
	return num;
}
