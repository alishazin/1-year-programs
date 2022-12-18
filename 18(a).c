#include <stdio.h>
#include <stdlib.h>

int main() {

    int size, i, *ptrArray, sum = 0;
    printf("\nEnter size of array: ");
    scanf("%d", &size);

    ptrArray = (int*) malloc(size * sizeof(int));

    // Asking Elements from user
    for (i=0; i<size; i++) {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &ptrArray[i]);
    } 

    // Finding Average
    for (i=0; i<size; i++) {
        sum += ptrArray[i];
    } 

    printf("\nAverage of the elements in Array is %0.2f", (float) sum/size);

    return 1;
}