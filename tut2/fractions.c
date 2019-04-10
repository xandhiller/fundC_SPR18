/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Takes input for a fraction and displays it as a mixed numeral.
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int main (int argc, char *argv[]) { 
    /* Prompt the user */
    printf("Enter the numerator and denominator separated by a space> ");

    int num, den;
    scanf("%d %d", &num, &den); /* Take input */

    int whole, fractional;
    whole = num / den;          /* Integer division */
    fractional = num % den;     /* Modulus operator */

    /* Ternary operator */
    whole > 0 ?  
        printf("%d %d/%d\n", whole, fractional, den) :
        printf("%d/%d\n", fractional, den);

    return 0;
}
