/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define TRUE    1
#define FALSE   0

int palindrome(char* word);

int main (int argc, char *argv[]) {
    palindrome("computer");

    return 0;
}

int palindrome(char* word) {
    printf("Testing the word %s\n", word); 
    unsigned int len = strlen(word);
    int i;
    for (i=0; i<len/2; i++) {
        if (word[i] ==  word[len-1-i]) {
            continue;
        }
        else {
            printf("%s is not a palindrome\n", word);
            return FALSE;
        }
    }
    printf("%s is a palindrome.\n", word);
    return TRUE; 
}
