#include <stdio.h>
#include <math.h>

#define WORD_SIZE   100
#define TRUE        1
#define FALSE       0

void takeInput(char array[], int size);
int checkArraySize(char array[], int size);
int palindromeCheck(char array[], int size);
void printArray(char array[], int size);
void initArray(char array[], int size);
int checkLen(char array[]);

int main (void) {
  char word[WORD_SIZE];
  initArray(word, WORD_SIZE);
  takeInput(word, WORD_SIZE);
  printArray(word, WORD_SIZE);
  if (palindromeCheck(word, checkLen(word)) == TRUE) {
    printf("It's a palindrome!\n");
  }
  else {
    printf("It's NOT a palindrome!\n");
  }
  return 0;
}

void takeInput(char array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    scanf("%[^\n]c", &array[i]);
  }
}

int checkArraySize(char array[], int size) {
  return 0;
}

int palindromeCheck(char array[], int size) {
  printf("Inside palindromeCheck(), size variable is> %d\n", size);
  int checkLength = size/2; /* Intentional integer division */
  printf("Inside palindromeCheck(), checkLength variable is> %d\n", checkLength);
  int i;
  int maxIndex = size-1;
  for (i = 0; i < checkLength; i++) {
    printf("Comparing %c with %c:\n", array[i], array[maxIndex-i]);
    if (array[i] != array[maxIndex-i]) {
      printf("%c != %c\n", array[i], array[maxIndex-i]);
      return FALSE;
    }
  }
  return TRUE;
}

void printArray(char array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%c", array[i]);
  }
  printf("\n");
}

int checkLen(char array[]) {
  int i;
  int count = 0;
  for (i = 0; array[i] != 0; i++) {
    count++;
  }
  return count;
}

void initArray(char array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    array[i] = 0;
  }
}
