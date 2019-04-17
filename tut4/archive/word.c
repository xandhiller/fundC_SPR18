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


#define LEN 6

int main (int argc, char *argv[]) {
    char word[LEN];
    printf("Enter a 3 letter word > ");
    scanf("%s", word);
    printf("You entered: %s\n", word);
    char reverse[LEN];
    int i;

    for (i=0; i<LEN-1; i++) {
        reverse[i] = word[LEN-2-i];
    }
    reverse[LEN-1] = '\0';
    printf("The reverse word is: %s\n", reverse);
    return 0;
}
