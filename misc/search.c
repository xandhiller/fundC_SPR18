
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
    
    char **strings;

    strings = (char**)malloc(sizeof(char*));

    printf("%p\n", strings);

    strings[0] = (char*)malloc(sizeof(char));

    strings[0] = "c";

    printf("%c\n", strings[0][0]);

    strings[1] = "hello world this is me";

    /* strcat(strings[1], "blah"); */

    /* printf("%s\n", strings[1]); */

    printf("%lu\n", sizeof(strings[1]));



    return 0;
}
