/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int factorial(int num);
int main (int argc, char *argv[]) {
    printf("Enter a number > ");
    int inp; 
    scanf("%i", &inp);
    int result = factorial(inp);
    printf("%i! = %i\n", inp, result);
    printf("%i! = ", inp);
    for (; inp > 0; inp--) {
        printf("(%i)", inp);
    }
    printf(" = %i\n", result);
    return 0;
}

int factorial(int num) {
    int result;
    for (result=1; num>0; num--) {
        result *= num;
    }
    return result;
}
