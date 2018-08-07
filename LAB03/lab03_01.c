# include <stdio.h>

int main (void) {
  int mark;
  printf("Enter a mark> ");
  scanf("%d", &mark);

  if (mark < 0){
    printf("below 0: Impossible, check the input again.\n");
  }

  if (mark > 0 && mark < 50) {
    printf("1-49: Z - Pity you failed, try harder next time.\n");
  }

  if (mark >= 50 && mark <= 100) {
    printf("50-100: P - Congratulations, way to go.\n");
  }

  if (mark > 100) {
    printf("over 100: Too awesome for the class, check the input again.\n");
  }

  return 0;
}
