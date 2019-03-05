/*
 * Author: Alex Hiller
 * Year: 2019
 * Program Description: 
 *     Demonstrating the similarities and differences between pointers 
 *     and strings
 *
 *     Part two: Just the character. 
 */


#include <stdio.h>
#include <stdlib.h>


int 
main (int argc, char *argv[]) { 

    char amsg[] = "Ground control to Major Tom\0";    
    char *pmsg = amsg;

    printf("%c\n", amsg[0]);
    printf("%c\n", *pmsg);


    return 0;
}
