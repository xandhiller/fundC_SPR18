/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Task 1, lab 4
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define LENGTH 5


int maxVal(int* arr, int arrlen);


int main (int argc, char *argv[]) {
    int inputArray[LENGTH] = {0,0,0,0,0};
    int outputArray[LENGTH] = {0,0,0,0,0};
    printf("Please enter %d numbers separated by spaces > ", LENGTH);
    int i;
    for (i=0; i<LENGTH; i++) {
        scanf("%i", &inputArray[i]);
    }
    printf("You entered > ");
    for (i=0; i<LENGTH; i++) {
        printf("%i ", inputArray[i]);
    }
    int expn;
    printf("\nPlease enter a value for n > ");
    scanf("%i", &expn);
    for (i=0; i<LENGTH; i++) {
        outputArray[i] = pow(inputArray[i], expn);
    }
    printf("Your output array is > ");
    for (i=0; i<LENGTH; i++) {
        printf("%i ", outputArray[i]);
    }
    printf("\n");
    printf("Your maximum value in outputArray is %i", 
             maxVal(outputArray, LENGTH));
    printf("\n");
    return 0;
}


int maxVal(int* arr, int arrlen) {
    int max = arr[0];
    int i;
    for (i=0; i<arrlen; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
