#include <stdio.h>

void printUpTriangle(int height);
void printRectangle(int length, int width);
void printDownTriangle(int height);
void printTrapezium(int side, int middle);

int main (void) {

  printTrapezium(16, 16);

  return 0;
}

void printUpTriangle(int height) {
  int i; 
  int k = 0;
  for (i = 0; k < height; i++) {
    for (i = 0; i<= k; i++) {
      printf("* ");
    }
    k++;
    printf("\n");
  }
}

void printDownTriangle(int height) {
  int i, j;  
  int k = height;  
  for (i = 0; i < height; i++) {
    for (j = k; j>0; j--) {
      printf("* ");
    }
    k--;
    printf("\n");
  }
}

void printRectangle(int length, int width) {
  int i;
  for (i = 0; i < length; i++) {
    for (i = 0; i< width; i++) {
      printf("* ");
    }
    printf("\n");
  }
}


void printTrapezium(int side, int middle) {
  printUpTriangle(side);
  printRectangle(middle/2, middle); 
  printDownTriangle(side);
}
