#include <stdio.h>
#include <math.h>

#define SIZE  5

enum arrayType {
  INPUT,
  OUTPUT
};

void takeInput(int array[], int size);
void printArray(int array[], int size, int type);
void arrayCalculation(int array[], int size);

int main (void) {
  int input[SIZE];  
  takeInput(input, SIZE); 
  printArray(input, SIZE, INPUT);  
  arrayCalculation(input, SIZE); 
  printArray(input, SIZE, OUTPUT);
  return 0;
}

void takeInput(int array[], int size) {
  int i; 
  printf("Enter %d values separated by spaces> ", SIZE);
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
}

void printArray(int array[], int size, int type) {
  int i;
  switch(type) {
    case (INPUT):
      printf("Input array is: ");
      break;
    case (OUTPUT):
      printf("Output array is: ");
      break;
  }

  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  } 
  printf("\n");

}

void arrayCalculation(int array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    array[i] = pow(array[i], 2.0);
  }
}
