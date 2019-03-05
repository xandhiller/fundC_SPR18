/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Demonstrating the similarities and differences between pointers 
 *    and arrays.
 *
 */


#include <stdio.h>
#include <stdlib.h>


int 
main (int argc, char *argv[]) { 

    char amsg[] = "Ground control to Major Tom\0";    
    char *pmsg = amsg;

    /*  What will print out from this?  */
    printf("%c\n", *pmsg);
    printf("%c\n", amsg[0]);

    /*  Is this going to evaluate as true?  */
    if (*pmsg == amsg[0])
        printf("True\n");
    
    /*  Are the strings the same?   */
    printf("%s\n", amsg);
    printf("%s\n", pmsg);

    /* Is this a valid operation? */
    *pmsg = 'A'; 

    /* What will this print? */
    printf("%s\n", amsg);
    

    return 0;
}
