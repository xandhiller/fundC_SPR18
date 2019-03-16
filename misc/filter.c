/*
 * Author:  Alex Hiller
 * Year:    2019
 *
 * Program Description: 
 *    A program similar to grep, built from the ground up.
 *
 */ 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


#define MAXLINES 5000


/* Right to left */
/*  !  ~  ++  --  +  -  *  &  (type)  sizeof */


/* Also right to left */
/*  =  +=  -=  *=  /=  %=  &=  ^=  |=  <<=  >>=  */


int
main (int argc, char *argv[]) {

    /* Find out some qualities about the CLI args. */ 
    /* printf("argc == %d\n", argc); */

    /* Cycle through input arguments and print them */
    while (--argc)
        printf("%s%c", *++argv, (argc==1 ? '\n' : ' '));


    /**************************************************************************/
    /* Take text from file and put it into a string pointer array */

    /* Open the file */
    FILE *f;
    f = fopen ("test", "r");
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    /* A pointer to char pointers. */ 
    /* void **points; */
    /* A string (char pointer) for comparison. */
    /* char *str = "Hello up top."; */
    /* printf("%s\n", str); */
    /* Have to allocate a pointer before you can use it. */
    /* points = (void**)malloc(sizeof(void*)); */
    /* printf("%p\n", points); */
    /* Now the pointer is allocated, you can allocate chars at the location it points to. */
    /* *points = (void*)malloc(sizeof(char)*8); */
    /* *points = "Hello\0"; */
    /* printf("%s\n", (char*)*points); */

    /* increment the pointer to pointers. */
    /* points++; */
    /* *points = (void*)malloc(sizeof(char)*8); */
    /* *points = "Goodbye\0"; */

    /* printf("%s\n", (char*)*points); */
    /* points--; */
    /* printf("%s\n", (char*)*points); */

    /* A pointer to char pointers. */ 
    void **points;
    /* Have to allocate a pointer before you can use it. */
    points = (void**)malloc(sizeof(void*));

    /* A string (char pointer) for comparison. */
    char *str = "Hello up top.";
    printf("%s\n", str);
    /* Print the address. */
    printf("%p\n", points);

    /* Now the pointer is allocated, you can allocate chars at the location it points to. */
    /* points[0] = (void*)malloc(sizeof(char)*8); */
    /* points[0] = "Hello\0"; */
    /* printf("%s\n", (char*)points[0]); */

    /* points[1] = (void*)malloc(sizeof(char)*8); */

    int lineNb = 0;
    int i;
    char c;

    for (i = 0; '\n' != (c = fgetc(f)); i++) {
        printf("Character read is: %c\n", c);
        points[lineNb] = (void*)realloc(points[lineNb], 
                                        sizeof(points[lineNb]) + sizeof(char));
        (char*)points[lineNb] = "c";
        printf("String in points[] is: %s\n", (char*)points[lineNb]);
    }

    /* increment the pointer to pointers. */
    /* points++; */
    /* *points = (void*)malloc(sizeof(char)*8); */
    /* *points = "Goodbye\0"; */

    /* printf("%s\n", (char*)*points); */
    /* points--; */
    /* printf("%s\n", (char*)*points); */







    /* ++points = (char**)malloc; */

    /* printf("%p\n", *points); */
    /* **points = "Hello\0"; */
    /* printf("%s\n", *points); */
    /* printf("%p\n", lines[0]); */
    /* printf("%p\n", ++lines[0]); */
    /* *(char*)(lines[0]) = 'c'; */
    /* *(char*)(lines[1]) = 'c'; */
    /* Size of the current element */
    /* add another char */


    /* char c; */
    /* int i; */



    fclose(f);
    return 0;
}


/* TODO: 
 *      - Search text from stdin (piping into file)
 *      - Get text to search from a file 
 */


/* QUESTIONS:
 * - Why do we not use ternary opertors very frequently?
 * - How best (syntactical simplicity) might we construct an array of strings?
 *
 */
