/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Enter in three letters and then reverse them
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


#define LENGTH 4

int main (int argc, char *argv[]) {
    char word[LENGTH];
    char bword[LENGTH]; 

    printf("Enter a word > ");
    scanf("%s", word);
    printf("You entered: %s\n", word);

    int i;
    for (i=0; i<LENGTH-1; i++) {
        bword[i] = word[LENGTH-1-1-i]; 
    }
    
    printf("Reverse word: %s\n", bword);

    char result[100] = {'\0'};
    strcat(result, word);
    strcat(result, "X");
    strcat(result, bword);
    printf("Concatenated words are: %s\n", result);
    return 0;
}
