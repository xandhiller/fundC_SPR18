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


/* #define <++> */


/* enum {}; */


int
main (int argc, char *argv[]) {
    
    printf("Guess the number > ");
    int num = 3;
    int guess;
    scanf("%i", &guess);
    if (guess == num)
        printf("Success.");
    else 
        printf("Failure.");


    return 0;
}
