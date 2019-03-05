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


int
main (int argc, char *argv[]) {
    
    const int x = 42;

    int *p = &x;

    *p = 43;

    return 0;
}
