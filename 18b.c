#include <stdio.h>

int main(){

	int rowCount, colCount;
	printf("\nEnter the number of rows: ");
	scanf("%d",&rowCount);
	printf("\nEnter the number of columns: ");
	scanf("%d",&colCount);
	
	int matA[rowCount][colCount], matB[rowCount][colCount], matC[rowCount][colCount], i, j;

	printf("\nEnter the elements of the 1st matrix: ");
	for (i = 0; i < rowCount; ++i)
		for (j = 0; j < colCount; ++j) {
		printf("\nEnter element A%d%d: ", i + 1, j + 1);
		scanf("%d", &matA[i][j]);
	}

	printf("\nEnter the elements of the 2nd matrix: ");
	for (i = 0; i < rowCount; ++i)
		for (j = 0; j < colCount; ++j) {
		printf("\nEnter element B%d%d: ", i + 1, j + 1);
		scanf("%d", &matB[i][j]);
	}

	// adding two matrices
	for (i = 0; i < rowCount; ++i)
		for (j = 0; j < colCount; ++j) {
		matC[i][j] = matA[i][j] + matB[i][j];
	}

	printf("\nSum of two matrices: \n");
	for (i = 0; i < rowCount; ++i) {
		for (j = 0; j < colCount; ++j) {
			printf("%d  ", matC[i][j]);
			if (j == colCount - 1) {
				printf("\n\n");
			}
		}
	}

	return 0;
}

  
