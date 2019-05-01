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
    int a = 1, b = 2;
    int* ptr = &b;
    printf("sizeof(a) is: %lu\n", sizeof(a)); 
    printf("a is %d\na is located at: %p\n", a, &a); 
    printf("sizeof(b) is: %lu\n", sizeof(b)); 
    printf("b is: %d\nb is located at:%p\n", b, &b); 
    printf("The address that ptr is storing is: %p\n", ptr); 
    return 0;
}
