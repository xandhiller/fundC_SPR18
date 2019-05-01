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


struct 
player {
    char letter;
    int age;
};
typedef struct player player_t;


player_t* init_player(void);
void print_player(player_t p);
void edit_age(player_t* p);
void destroy_player(player_t* p);


int
main (int argc, char *argv[]) {
    player_t* pl = init_player();
    printf("First print:\n"); 
    print_player(*pl);
    printf("Second print:\n"); 
    edit_age(pl);
    print_player(*pl);
    destroy_player(pl);
    free(pl);
    pl = NULL;
    printf("%p\n", &pl); 
    edit_age(pl);
    return 0;
}


player_t* init_player(void){
    player_t* p = (player_t*)malloc(sizeof(player_t));
    (*p).letter = 'a';
    (*p).age = 42;
    return p;
}
void print_player(player_t p){
    printf("%c\n", p.letter); 
    printf("%d\n", p.age); 
}
void edit_age(player_t* p){
    (*p).letter = 'b';
    (*p).age = 32;
}
void destroy_player(player_t* p){
    free(p);
    p = NULL;
}
