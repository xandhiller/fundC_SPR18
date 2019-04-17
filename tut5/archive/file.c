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


#define FILENAME "theFile.txt" 

int main (int argc, char *argv[]) {
    
    FILE* fp;
    fp = fopen(FILENAME, "w");

    if (fp == NULL)
        return 1;

    fprintf(fp, "This is a test!\n");

    fclose(fp);

    return 0;
}
