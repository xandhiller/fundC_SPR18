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

#define LEN 1000

/* FIXME int slen(char arr[]); */

int
main (int argc, char *argv[]) {
    char word[LEN];

    char c = getc(stdin);
    int i; 
    for (i=0; (i<LEN) && (c != '\n'); i++) {
        word[i] = c;
        c = getc(stdin);
    }

    word[i] = '\0'; 

    printf("Input is: %s\n", word);
    printf("strlen(input) == %lu\n", strlen(word));

    char bword[LEN];
    unsigned int wlen = strlen(word);
    for (i=0; i<wlen; i++) 
        bword[i] = word[wlen-1-i];

    printf("bword: %s\n", bword);



    return 0;
}


/* FIXME int slen(char* arr) { 
    char c;
    int count = 0;
    int i;
    for (i=0; c!='\0'; i++) 
        c = arr[i];
        count++;
    return count;
} */
