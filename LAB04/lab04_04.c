#include <stdio.h>
#include <math.h>

#define WORD_SIZE 3

enum order {
  FORWARD,
  BACKWARD
};

void takeInput(char array[], int size);
void printArray(char array[], int size, int order);

int main (void) {
  char word[WORD_SIZE];

  printf("Enter a %d lettered word> ", WORD_SIZE);

  takeInput(word, WORD_SIZE);

  printf("Word is: ");
  printArray(word, WORD_SIZE, FORWARD);

  printf("Reverse word is: ");
  printArray(word, WORD_SIZE, BACKWARD);  

  return 0;
}

void takeInput(char array[], int size) {
  int i; 
  for (i = 0; i < size; i++) {
    scanf("%c", &array[i]);
  }
}

void printArray(char array[], int size, int order) {
  int i;

  if (order == FORWARD) {
    for (i = 0; i < size; i++) {
      printf("%c", array[i]);
    } 
    printf("\n");
  }

  if (order == BACKWARD) {
    for (i = size-1; i >= 0; i--) {
      printf("%c", array[i]);
    } 
    printf("\n");
  }
}

