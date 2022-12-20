#include <stdio.h>
#include <stdlib.h>

int main() {

    int size, i, sum = 0;
    printf("\nEnter size of array: ");
    scanf("%d", &size);

    int array[size];

    // Asking Elements from user
    for (i=0; i<size; i++) {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &array[i]);
    } 

    // Finding Average
    for (i=0; i<size; i++) {
        sum += array[i];
    } 

    printf("\nAverage of the elements in Array is %0.2f", (float) sum/size);

    return 1;
}