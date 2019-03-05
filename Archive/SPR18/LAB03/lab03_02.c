#include <stdio.h>

int main (void) {
  /* Take in two variables */
  printf("Enter an x and y coordinate, each separated by a space> ");
  int x, y;
  scanf("%d %d", &x, &y);

  /* Do logic */
  if (x == 0 && y==0) {
    printf("(x1, y1) is at the origin\n");
  }

  if (x > 0 && y > 0 ) {
    printf("(x1, y1) is in Quadrant I\n");
  }

  if (x < 0 && y > 0) {
    printf("(x1, y1) is in Quadrant II\n");
  }

  if (x < 0 && y < 0) {
    printf("(x1, y1) is in Quadrant III\n");
  }

  if (x > 0 && y < 0) {
    printf("(x1, y1) is in Quadrant IV\n");
  }

  if (x == 0 && y != 0) {
    printf("(x1, y1) is on the Y-axis\n");
  }

  if (x != 0 && y ==0) {
    printf("(x1, y1) is on the X-axis\n");
  }

  return 0;
}
