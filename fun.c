#include <stdio.h>
#include <stdlib.h>

#define WIN_POINT 3

void printComputerChoice(int choice) {
	if (choice == 1) {
		printf("\nComputer chose Rock.");
	} else if (choice == 2) {
		printf("\nComputer chose Paper.");
	} else if (choice == 3) {
		printf("\nComputer chose Scissor.");
	}
}

int getRandomNum(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}

int getSuccess(int userChoice, int computerChoice) {
	if (userChoice == computerChoice) return 0;
	if (userChoice == 1 && computerChoice == 2) return -1;
	if (userChoice == 1 && computerChoice == 3) return 1;
	if (userChoice == 2 && computerChoice == 1) return 1;
	if (userChoice == 2 && computerChoice == 3) return -1;
	if (userChoice == 3 && computerChoice == 1) return -1;
	if (userChoice == 3 && computerChoice == 2) return 1;
}

int main() {
	
	int userPoints = 0, computerPoints = 0, userChoice=-1, computerChoice=-1;
	
	printf("\n\n-----Welcome to Rock, Paper, Scissor Game-----");
	
	while (1) {
		do {
			printf("\n\nEnter 1 for Rock, 2 for Paper, 3 for Scissor : ");
			scanf("%d", &userChoice);
		} while (userChoice < 0 || userChoice > 4);
	
		computerChoice = getRandomNum(1, 3);
		printComputerChoice(computerChoice);
	
		int result = getSuccess(userChoice, computerChoice);
	
		if (result == -1) {
			printf("\n\nComputer Won a Point");
			computerPoints++;
		} else if (result == 0) {
			printf("\n\nBoth choice were same");
		} else if (result == 1) {
			printf("\n\nUser Won a Point");
			userPoints++;
		}

		printf("\n\nUser = %d, Computer = %d", userPoints, computerPoints);

		if (computerPoints == WIN_POINT) {
			printf("\n\nComputer Won the match");
			break;
		} else if (userPoints == WIN_POINT) {
			printf("\n\nUser Won the match");
			break;
		}
	}
	
	printf("\n\nThank You, Visit Again..");
	
	return 0;
}
