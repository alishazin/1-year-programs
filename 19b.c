#include <stdio.h>

void getArray(int array[], int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("\nEnter Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int linearSearch(int array[], int size, int searchElement) {
    int i;
    for (i=0; i<size; i++) {
        if (array[i] == searchElement) {
            return i;
        }
    }
    return -1;
}

int main() {

    int size, choice, pos, searchElement;
    printf("\nEnter length of array: ");
    scanf("%d", &size);

    int array[size];
    getArray(array, size);

    printf("\nEnter the element to search for: ");
    scanf("%d", &searchElement);

    pos = linearSearch(array, size, searchElement);

    if (pos == -1) {
        printf("\n'%d' not found in array", searchElement);
    } else {
        printf("\n'%d' found in array at index %d", searchElement, pos);
    }

    return 0;
}