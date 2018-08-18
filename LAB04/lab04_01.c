#include <stdio.h>

#define SIZE  10

int main (void) {
  int input[SIZE];
  printf("Enter %d values separated by spaces> ", SIZE);
  
  int i;
  /* Take in values */
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &input[i]);
  }

  /* Print values */
  printf("Input array is: ");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", input[i]);
  } 
  printf("\n");

  return 0;
}
