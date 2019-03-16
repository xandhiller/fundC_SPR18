#include <stdio.h>

int middle1(int a[], int n);
int middle2(int* a, int n);

int main (void) {
  int a[] = {1,2,3,4,5};
  
  printf("Middle 1 returns: %d\n", middle1(a, 5));

  printf("Middle 2 returns: %d\n", middle2(a, 5)); 

  return 0;  
}

int middle1(int a[], int n) {
    return a[n/2];
}

int middle2(int *a, int n) {
    return a[n/2];
}



