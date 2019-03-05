/*
 * Author: Alex Hiller
 * Year: 2019
 * Program Description: Data structures library.
 *                      - Linked Lists
 *                      - FIFO
 *                      - LIFO
 *
 *    Note: Nowhere near finished.
 */


#include <stdio.h>
#include <stdlib.h>


enum {
  FAILURE,
  SUCCESS,
};

enum {
  
};

/* Data type */
struct data {
  int data;
};
typedef struct data data_t;


/* Linked list */
struct list {
  data_t d;
  struct list *prev;
  struct list *next; 
}; 
typedef struct list list_t;


/* Linked list init */
list_t
*listInit (data_t initData) {

  list_t *l = (list_t *)malloc(sizeof(list_t)); 
  if (l == NULL) 
    return (list_t *) NULL;

  l->next = NULL; /* The next node is NULL until it is created and stored. */

  /* Store the init data if it's not NULL */
  if (initData != NULL)
    l->d = initData;
  else
    l->d = NULL;

  return l;
}


int 
main (int argc, char *argv[]) { 

  data_t d;
  d.data = 5;
  list_t hello; 

  return 0;
}
