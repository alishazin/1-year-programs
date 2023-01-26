#include <stdio.h>
#include <string.h>

int main() {
	
	char day[10], weather[10];
	int num;
	
	printf("\nEnter day, weather : ");
	scanf("%s %s", &day, &weather);
	
	if ((strcmp(strlwr(day), "sunday") == 0 && strcmp(strlwr(weather), "snowing") == 0) || 
		(strcmp(strlwr(day), "monday") == 0 && strcmp(strlwr(weather), "raining") == 0)) {
			printf("1");
		} else {
			printf("0");			
		}
		
	printf("\nEnter Number: ");
	scanf("%d", &num);
	
	if (num > 9 && num < 100) {
		printf("1");
	} else {
		printf("0");
	}
	
	
	return 0;
}
