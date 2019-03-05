/*
 * Author: Alex Hiller
 * Year: 2019
 * Program Description: What is null? A simple test!
 *
 */

#include <stdio.h>
#include <stdlib.h>

int 
main (int argc, char *argv[]) { 

  if ('\0' == NULL)
    printf("\\0 \t== \tNULL\n");

  if (0 == NULL)
    printf("0 \t== \tNULL\n");

  return 0;
}
