/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Task 1, Lab 2
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/* #define  */

int main (int argc, char *argv[]) {
    /* Indicate to the user what to do */
    printf("Enter two numbers separated by a space\t> ");

    int num, den;
    scanf("%d %d", &num, &den);

    printf("You entered > %d %d\n", num, den);

    int div = num/den;
    if (div == 0) {
        printf("%d/%d =  %d/%d\n", num, den, num%den, den);
    }
    else {
        printf("%d/%d = %d %d/%d\n", num, den, div, num%den, den);
    }

    return 0;
}
