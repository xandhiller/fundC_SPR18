/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int factorial(int num);

int main (int argc, char *argv[]) {

    printf("Enter number > ");    
    int entry;
    scanf("%i", &entry);
    int calc = factorial(entry);
    printf("%i! = %i\n", entry, calc);
    printf("Hence: \n%i!=", entry);
    for (; entry>0; entry--)
        printf("(%i)", entry);
    printf("=%i\n", calc);

    return 0;
}


int factorial(int num) {
    int result;
    for (result = 1; num>0; num--) {
        result *= num;
    }
    return result;
}
