/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Demonstrating the method for opening and writing to files.
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define FILENAME "testFile.txt"
#define ERROR    1

int main (int argc, char *argv[]) {
    FILE* fp;
    fp = fopen(FILENAME, "a");
    if (fp == NULL)
        return ERROR; /* Unable to open file */

    fprintf(fp, "This is yet another test\n");
    fclose(fp);
    return 0;
}

/* CB11.B1.400 @ 16:00 Thursdays */ 
/* CB11.B1.400 @ 18:00 Thursdays */ 
/* alexander.hiller@uts.edu.au */
