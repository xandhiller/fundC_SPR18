#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define LENGTH 5

int maxVal(int* arr, int arrlen);

int main (int argc, char *argv[]) {
    int inputArray[LENGTH];
    int outputArray[LENGTH];

    int i;
    printf("Please enter %i numbers separated by white space > ", LENGTH);
    for (i=0; i<LENGTH; i++) 
        scanf("%i", &inputArray[i]);

    for (i=0; i<LENGTH; i++) 
        printf("%i ", inputArray[i]);
    printf("\n");

    int expn;
    printf("Enter a value of n > ");
    scanf("%i", &expn);
    
    for (i=0; i<LENGTH; i++) 
        outputArray[i] = pow(inputArray[i], expn);

    for (i=0; i<LENGTH; i++) 
        printf("%i ", outputArray[i]);
    printf("\n");
    
    printf("Your max value was: %i\n", maxVal(outputArray, LENGTH));

    return 0;
}

int maxVal(int* arr, int arrlen) {
    int max = arr[0];
    int i;
    for (i=0; i<arrlen; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
