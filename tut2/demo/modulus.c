/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Demonstrate the modulus function
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>



int main (int argc, char *argv[]) {
    int a, b;
    a = 35;
    b = 11;
    printf("%i modulus %i = %i\n", a, b, a%b);
    /* a % b ==> a / b, get the remainder and return it. */
    return 0;
}
