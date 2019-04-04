/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Demonstrates the use of functions
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/* Prototypes  */
void hello (void);
void world (void);

/* Main  */
int main (int argc, char *argv[]) {
    hello();
    world();
    return 0;
}

/* Definitions */
void hello(void) {
    printf("Hello ");
}

void world(void) {
    printf("world\n");
}
