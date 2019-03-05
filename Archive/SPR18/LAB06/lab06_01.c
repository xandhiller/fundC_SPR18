#include <stdio.h>

int middle1(int a[], int n);
int middle2(int* a, int n);

int main (void) {
  int a = 1, b = 2; 
  int* ptr = &b; 

  printf("Pointer address of b from ptr is: %p\n", ptr);
  printf("Pointer address of b from &b is: %p\n", &b);
  printf("Pointer address of a is: %p\n", &a);
  printf("Address of ptr is: %p\n", &ptr);
  printf("Size of ptr is: %lu\n", sizeof(ptr));
  char c = 'c';
  printf("Size of char is: %lu\n", sizeof(c));

  

  return 0;  
}


