#include <stdio.h>

int main() {

    int array[4] = {2, 4, 6, 8};
    int step, i;
    int size = sizeof(array) / sizeof(int);

    for (step=0; step < size - 1; step++) {
        for (i=0; i< size - step - 1; i++) {
            if (array[i] > array[i+1]) {
                array[i] = array[i] + array[i+1];
                array[i+1] = array[i] - array[i+1];
                array[i] = array[i] - array[i+1];
            }
        }
    }

    printf("\n");
    for (i=0; i<size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}