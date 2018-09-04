#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct player {
    char letter;
    int age;
};
typedef struct player player_t; 

void printStruct(player_t* p);

int main (void) { 
  /*player_t plyr;
  player_t* plyrPtr;*/
/*  printf("Size of size_t is: %lu\n", sizeof(size_t));
  long long dub;
  printf("Size of double is: %lu\n", sizeof(dub));*/ 


  /* Memory allocation demo */
  int* xp = NULL;
  xp = (int*) malloc(1*sizeof(int));
  if (xp==NULL){
    printf("Allocation failed.\n");
  }
  *xp = 3;
  printf("xp is: %d\n", *xp);

  player_t testSize;

  printf("The size of a player_t struct is: %lu\n", sizeof(testSize));
  printf("The size of a player_t sub-structure letter is: %lu\n", sizeof(testSize.letter));
  printf("The size of a player_t sub-structure int is: %lu\n", sizeof(testSize.letter));





  player_t* pP;
  pP = (player_t*) malloc(1*sizeof(player_t));

  (*pP).letter = 'a';
  (*pP).age = 31;

  printStruct(pP);
   


  return 0;

}


 /* Accessing substructures from the pointer */
void printStruct(player_t* p) {
  printf("Letter in the struct is: %c\n", (*p).letter);
  printf("Age in the struct is: %d\n", (*p).age);
  
}
