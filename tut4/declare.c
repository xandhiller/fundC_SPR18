#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define LENGTH 9

void editArr(int* arr);

int main (int argc, char *argv[]) {
    
    int numbers[LENGTH] = {1,2,3,4,5,6,7,8,9};
    int i;
    for (i=0; i<LENGTH; i++) {
        printf("%i\n", numbers[i]);
    }
    printf("%p\n", &numbers[0]);
    printf("%p\n", numbers);

    return 0;
}
