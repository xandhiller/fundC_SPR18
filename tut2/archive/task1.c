/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Lab 2, Task 1
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
    int num, den;
    
    /* Prompt the user */
    printf("Enter the numerator and denominator"
            ", separated by a space > ");
    scanf("%i %i", &num, &den);
    
    /* Calculate the whole part */
    int whole = num/den; /* Integer division */ 

    /* Calculate the remainder */
    int remainder = num % den;

    /* Tell the user */
    printf("%i/%i = %i %i/%i\n", num, den, whole, remainder, den); 


    return 0;
}
