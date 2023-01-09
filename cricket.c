#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNum(int lower, int upper) {
	srand(time(NULL));
    return (rand() % (upper - lower + 1)) + lower;
}

int tossingProcess() {
	int coinChoice;
    do {
		printf("\nEnter 0 for head and 1 for tail: ");
		scanf("%d", &coinChoice);	
	} while (!(coinChoice == 0 || coinChoice == 1));
	if (getRandomNum(0, 1) == coinChoice) {
		printf("\nUser Won the toss!");
		return 1;
	} else {
		printf("\nComputer Won the toss!");
		return 0;	
	}
}

int battingOrBowling(int userbat, int secondBatting, int opponentScore) {
	int userChoice, computerChoice, score = 0;
	while (1) {
		do {
			printf("\nEnter user choice [0-6]: ");
			scanf("%d", &userChoice);	
		} while (userChoice > 6 || userChoice < 0);
		computerChoice = getRandomNum(0,6);
		if (userChoice == computerChoice) {
			if (userbat) printf("\nUser Out!");
			else printf("\nComputer Out!");
			return score;
		} else {
			if (userbat) score += userChoice;
			else score += computerChoice;
			if (userbat) printf("\nUser Scored %d", userChoice);
			else printf("\nComputer Scored %d", computerChoice);
			if (secondBatting && score > opponentScore) return score;
		}
		printf("\nScore = %d", score);
	}
	return score;
}

int main() {
	
	printf("\n\n---------- Cricket Game ----------\n\n");
	
	int tossWin; // 1 for user, 0 for computer
	int computerScore, userScore, computerChoice, userChoice;  // 1 for bat, 0 for ball;
	tossWin = tossingProcess(1);
	
	if (tossWin == 0) {
		computerChoice = getRandomNum(0,1);
		if (computerChoice == 0) {
			printf("\nComputer chose to bowl first.");
			userScore = battingOrBowling(1,0,-1);
			computerScore = battingOrBowling(0,1,userScore);
		} else {
			printf("\nComputer chose to bat first.");
			computerScore = battingOrBowling(0,0,-1);
			userScore = battingOrBowling(1,1,computerScore);
		}
	} else {
		do {
			printf("\nEnter 0 for bowling and 1 for batting: ");
			scanf("%d", &userChoice);	
		} while (!(userChoice == 0 || userChoice == 1));
		if (userChoice == 1) {
			printf("\nUser chose to bat first.");
			userScore = battingOrBowling(1,0,-1);
			computerScore = battingOrBowling(0,1,userScore);
		} else {
			printf("\nUser chose to bowl first.");
			computerScore = battingOrBowling(0, 0, -1);
			userScore = battingOrBowling(1, 1, computerScore);
		}
	}
	
	printf("\n\nFinal Score:\nUser = %d\nComputer = %d", userScore, computerScore);
	
	if (userScore>computerScore) {
		printf("\nUser won the match");
	} else if (computerScore>userScore) {
		printf("\nComputer won the match");
	} else {
		printf("\nMatch is tied.");	
	}
	
	
	return 0;
}
