#include <stdio.h>

void printUpTriangle(int height);
void printRectangle(int length, int width);
void printDownTriangle(int height);

int main (void) {

  printUpTriangle(4);
  printRectangle(2, 4);
  printDownTriangle(4);

  return 0;
}

void printUpTriangle(int height) {
  int k = 0;
  for (int i = 0; k < height; i++) {
    for (int i = 0; i<= k; i++) {
      printf("* ");
    }
    k++;
    printf("\n");
  }
}

void printDownTriangle(int height) {
  int k = height;
  for (int i = 0; i < height; i++) {
    for (int i = 0; i< k; i++) {
      printf("* ");
    }
    k--;
    printf("\n");
  }
}

void printRectangle(int length, int width) {
  for (int i = 0; i < length; i++) {
    for (int i = 0; i< width; i++) {
      printf("* ");
    }
    printf("\n");
  }
}
