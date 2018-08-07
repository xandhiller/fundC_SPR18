#include <stdio.h>

int main (void) {
  int numr;
  int denm;
  printf("Enter the numerator and denominator separated by a space> ");
  scanf("%d %d", &numr, &denm);

  /* printf("%d\n", numr); */
  /* printf("%d\n", denm); */

  if (numr > denm) {
    printf("%d ", (numr/denm));

    if ( numr % denm) {
      printf("%d/%d\n", (numr % denm), denm);
    }
  }

  else {
    printf("%d/%d\n", numr, denm);
  }

  return 0;
}
