#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define LENGTH 5

void editArr(int* arr);

int main (int argc, char *argv[]) {
    int numbers[LENGTH] = {1,2,3,4,5};

    printf("%i %i %i %i %i\n",
            numbers[0],
            numbers[1],
            numbers[2],
            numbers[3],
            numbers[4]);
    editArr(numbers);
    printf("%i %i %i %i %i\n",
            numbers[0],
            numbers[1],
            numbers[2],
            numbers[3],
            numbers[4]);
    return 0;
}

void editArr(int* arr) {
    arr[0] = 9;
}
