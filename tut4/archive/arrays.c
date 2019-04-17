/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    j
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


#define LEN 1000 

void editArray(char* words);

int main (int argc, char *argv[]) {
    char arr[LEN];

    scanf("%s", arr);

    printf("%s\n", arr);

    editArray(arr);

    printf("%s\n", arr);
    return 0;
}

void editArray(char* words) {
    words[0] = '$';
}
