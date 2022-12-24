#include <stdio.h>
#include <stdbool.h>

void getArray(int array[], int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("\nEnter Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
} 

void printArray(int array[], int size) {
    int i;
    printf("\n");
    for (i=0; i<size; i++) {
        printf("%d, ", array[i]);
    }
} 

void sortArray(int array[], int size, bool asc) {

    int step, i, temp;
    
    for (step = 0; step < size - 1; step++) {

        for (i = 0; i < size - step - 1; i++) {

            if ((asc == true && array[i] > array[i + 1]) || (asc == false && array[i] < array[i + 1])) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int main() {

    int size, choice;
    printf("\nEnter length of array: ");
    scanf("%d", &size);

    int array[size];
    getArray(array, size);

    printf("\nEnter 0 for Ascending order and anything else for Descending order : ");
    scanf("%d", &choice);

    if (choice == 0) {
        sortArray(array, size, true);
    } else {
        sortArray(array, size, false);
    }

    printArray(array, size);

    return 0;
}