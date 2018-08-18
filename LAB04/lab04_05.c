#include <stdio.h>
#include <math.h>

#define WORD_SIZE 3

enum order {
  FORWARD,
  BACKWARD
};

void takeInput(char array[], int size);
void printWordArt(char array[], int size);

int main (void) {
  char word[WORD_SIZE];

  printf("Enter a %d lettered word> ", WORD_SIZE);

  takeInput(word, WORD_SIZE);

  printWordArt(word, WORD_SIZE);

  return 0;
}

void takeInput(char array[], int size) {
  int i; 
  for (i = 0; i < size; i++) {
    scanf("%c", &array[i]);
  }
}

void printWordArt(char array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%c", array[i]);
  } 
  printf("X");
  for (i = size-1; i >= 0; i--) {
    printf("%c", array[i]);
  } 
  printf("\n");
}

