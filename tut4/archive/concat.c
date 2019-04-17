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


#define LEN 5 

int main (int argc, char *argv[]) {
    char word1[LEN];
    char word2[LEN];

    scanf("%s", word1);
    scanf("%s", word2);
    printf("The concatentated strings are: %s\n", strcat(word1,word2));


    return 0;
}
