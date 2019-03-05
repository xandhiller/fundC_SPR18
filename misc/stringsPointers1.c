/*
 * Author: Alex Hiller
 * Year: 2019
 * Program Description: 
 *    Demonstrating the similarities and differences between pointers and strings
 *
 */


#include <stdio.h>
#include <stdlib.h>


int 
main (int argc, char *argv[]) { 

    char amsg[] = "Ground control to Major Tom\0";    
    char *pmsg = amsg;

    printf("%s\n", amsg);
    printf("%s\n", pmsg);


    return 0;
}
