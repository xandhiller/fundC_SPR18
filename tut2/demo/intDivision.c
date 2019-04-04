
/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Program to demonstrate integer division.
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int main (int argc, char *argv[]) {
    int num,den;
    printf("numerator\t>");
    scanf("%i", &num);
    printf("denominator\t>");
    scanf("%i", &den);
    printf("%i / %i = %i\n", num, den, num/den);

    return 0;
}
