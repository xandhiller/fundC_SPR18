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

#define ROWS 8
#define COLS 10
#define SYMB "7"

void printRectangle(int width, int col, char *symb);
void printLower(int width, int col, char *symb);
void printUpper(int width, int col, char *symb);

int main (int argc, char *argv[]) {
    /* int i,j; */ 
    /*for (i = ROWS; i > 0; i--) {
        for (j = COLS; j>0; j--) {
            printf("%s ", SYMB);
        }
        printf("\n");
    }*/
    printUpper(3, 3, "+");
    printRectangle(3,3,"+");
    printLower(3, 3, "+");
    return 0;
}

void printLower(int width, int col, char *symb) { 
    int i,j;
    for (i = width; i > 0; i--) {
        for (j = i; j>0; j--) {
            printf("%s ", symb);
        }
        printf("\n");
    }
}

void printUpper(int width, int col, char *symb) { 
    int i,j;
    for (i = width; i > 0; i--) {
        for (j = col-i; j>=0; j--) {
            printf("%s ", symb);
        }
        printf("\n");
    }
}

void printRectangle(int width, int col, char *symb) { 
    int i,j;
    for (i = width; i > 0; i--) {
        for (j = col; j>0; j--) {
            printf("%s ", symb);
        }
        printf("\n");
    }
}
