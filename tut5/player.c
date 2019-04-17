/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Lab 5, task 1-3
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define A_BETTER    1
#define B_BETTER    2
#define INDIFFERENT 3
#define ERROR       1
#define SUCCESS     0
#define FILENAME    "database.txt"

struct player {
    char letter;
    int age;
    float avg;
};
typedef struct player player_t;

void stats(player_t p);
player_t scanPlayer(void);
int compAB(player_t A, player_t B);
int savePlayer(player_t p, char* filename);
int readPlayer(char* filename);


/*******************************************************************************/
int main (int argc, char *argv[]) {
    /* player_t bradman  = scanPlayer(); */
    /* player_t brettLee = scanPlayer(); */
    /* stats(bradman); */
    /* stats(brettLee); */
    /* if (compAB(bradman, brettLee) == A_BETTER) */
        /* printf("Bradman is better!\n"); */
    /* if (compAB(bradman, brettLee) == B_BETTER) */
        /* printf("Brett Lee is better!\n"); */
    /* if (compAB(bradman, brettLee) == INDIFFERENT) */
        /* printf("They're too close to compare.\n"); */
    /* savePlayer(bradman, FILENAME); */
    /* savePlayer(brettLee, FILENAME); */
    readPlayer(FILENAME);
    return 0;
}
/*******************************************************************************/


void stats(player_t p) {
    printf("%c\t%i\t%f\n", p.letter, p.age, p.avg);
}

player_t scanPlayer(void) {
    player_t p;
    printf("Please enter the first letter of the player's name > ");
    scanf(" %c", &p.letter);
    printf("Please enter the player's age > ");
    scanf("%i", &p.age);
    printf("Please enter the player's batting average > ");
    scanf("%f", &p.avg);
    return p;
}


int compAB(player_t A, player_t B) {
    if (A.avg >= B.avg + 10)
        return A_BETTER;

    else if (B.avg >= A.avg + 10)
        return B_BETTER;

    else if (B.age >= A.age + 15)
        return A_BETTER;

    else if (A.age >= B.age + 15)
        return B_BETTER;
    
    else
        return INDIFFERENT;
}

int savePlayer(player_t p, char* filename) { 
    FILE* fp;
    fp = fopen(filename, "a");
    if (fp == NULL)
        return ERROR;
    fprintf(fp, "%c\t%i\t%f\n", p.letter, p.age, p.avg);
    fclose(fp);
    return SUCCESS;
}


int readPlayer(char* filename) {
    FILE* fp;
    fp = fopen(filename, "r");
    if (fp == NULL)
        return ERROR;
    player_t read;
    fscanf(fp, "%c\t%i\t%f\n", &read.letter, &read.age, &read.avg);
    stats(read);
    fclose(fp);
    return SUCCESS;

}
