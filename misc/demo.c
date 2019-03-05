/*
 * Author: Alex Hiller
 * Year: 2019
 * Program Description: Demonstration file.
 *
 */


#include <stdio.h>
#include <stdlib.h>


void 
goodbye (void) {
  printf("Goodbye ");
}


void 
earth (void) {
  printf("earth.\n");
}


int 
main (int argc, char *argv[]) { 
  printf("Hello world.\n");
  goodbye();
  earth();

  return 0;
}
