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



int main (int argc, char *argv[]) {
    int i,j;


    for (i=1; i<4; i++) {
        for (j=i;j>0;j--) {
           printf("* "); 
        }
    printf("\n");
    }


    for (i=1; i<5; i++) {
        printf("* * * *\n");
    }

    for (i=3; i>0; i--) {
        for (j=i;j>0;j--) {
           printf("* "); 
        }
    printf("\n");
    }
        


    return 0;
}
