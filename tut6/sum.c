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
list {
    unsigned int val;
    struct list* next;
};
typedef struct list list_t;



list_t* init_list(void);
int sum_list(list_t* l);
void new_node(list_t* l);




int
main (int argc, char *argv[]) {
    list_t* l = init_list();
    printf("First sum:\n"); 
    printf("%d\n", sum_list(l)); 
    new_node(l);
    list_t* next = l->next;
    next->val = 40;
    printf("%d\n", sum_list(l)); 
    return 0;
}




list_t* init_list(void){
    list_t* ls = (list_t*)malloc(sizeof(list_t));
    ls->val = 10;
    ls->next = NULL;
    return ls;
}


int sum_list(list_t* l){
    int s = 0;
    do {
        s += l->val;
        l = l->next;
    } while (l != NULL);
    return s;
}


void new_node(list_t* l){
    while (l->next != NULL) {
        l = l->next;
    }
    l->next = (list_t*)malloc(sizeof(list_t));
    l = l->next;
    l->next = NULL;
}
