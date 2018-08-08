#include <stdio.h>

int main (void) {
  /* printf("Enter a value to count down from> "); */
  printf("Enter a value to take the factorial of> ");
  int input;
  scanf("%d", &input);


  /* printf("Countdown commencing!\n");
  for (int i =input; i >= 0; i--) {
    printf("%d\n", i);
  }*/

  int ans = 1;
  printf("%d! = ", input);
  for (int i =input; i > 0; i--) {
    ans = ans*i;
    printf("(%d)", i);
  }
  printf(" = %d\n", ans);

  return 0;
}
