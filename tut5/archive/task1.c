/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    task 1-2  lab 5
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define A_BETTER    1
#define B_BETTER    2
#define INDIFFERENT 3
#define FAILURE     1
#define SUCCESS     0
#define FILENAME    "database.txt"


struct player {
    char letter;
    int age;
    float avg;
};
typedef struct player player_t;


player_t scanPlayer(void);
void printPlayer(player_t p);
int compAB(player_t a, player_t b);
int savePlayer(player_t p, char* filename);
int readPlayer(char* filename);

int main (int argc, char *argv[]) {
    /* player_t bradman = scanPlayer(); */
    /* savePlayer(bradman, FILENAME); */
    readPlayer(FILENAME);
    /* readPlayer(bradman); */
    return 0;
}

player_t scanPlayer(void) {
    player_t p;
    printf("Enter the first letter of the player name > ");
    scanf(" %c", &p.letter);
    printf("Enter the age > ");
    scanf("%i", &p.age);
    printf("Enter the batting average > ");
    scanf("%f", &p.avg);
    return p;
}

void printPlayer(player_t p) {
    printf("%c\t%i\t%f\n", p.letter, p.age, p.avg);
}


int compAB(player_t a, player_t b) {
    if (a.avg >= b.avg + 10)  
        return A_BETTER;
else if (b.avg >= a.avg + 10)
        return B_BETTER;

    else if (b.age - a.age >= 15)
        return B_BETTER;

    else if (a.age - b.age >= 15)
        return A_BETTER;

    else 
        return INDIFFERENT;
}

int savePlayer(player_t p, char* filename) {
    FILE* fp;
    fp = fopen(filename, "a");
    if (fp == NULL)
        return FAILURE;
    fprintf(fp, "%c\t%i\t%f\n", p.letter, p.age, p.avg);
    fclose(fp);
    return SUCCESS;
}

int readPlayer(char* filename) {
    FILE* fp;
    fp = fopen(filename, "r");
    if (fp == NULL)
        return FAILURE;
    player_t read;
    fscanf(fp, "%c\t%i\t%f\n", &read.letter, &read.age, &read.avg);
    printf("%c\t%i\t%f\n", read.letter, read.age, read.avg);
    fclose(fp);
    return SUCCESS;
}
