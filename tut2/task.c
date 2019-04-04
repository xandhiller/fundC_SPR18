/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    <++>
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
    /* Take some input */
    printf("Enter the numerator and denominator, "
            "separated by a space > ");
    int num, den;
    /* Store the input */
    scanf("%i %i", &num, &den);
    /* Calculate whole part */
    int whole = num/den;
    /* Calculate remainder part */
    int remainder = num % den;
    /* Tell the user */  
    printf("%i/%i = %i %i/%i\n", num, den, whole, remainder, den);
    return 0;
}
