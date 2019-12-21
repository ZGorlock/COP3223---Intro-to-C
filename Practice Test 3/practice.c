#include <stdio.h>

int f(int*, int, int, int*);

int main() {
  int a = 1, b = 3, c = 2, d = 4, e = 5;
  e = f(&a, f(&b, a, e, &c), e, &d);
  printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
  system("PAUSE");
  return 0;
}

int f(int* d, int c, int b, int* a) {
  *a = *a + 1;
  c = c + (*a);
  b = b + c;
  *d = *a + 2;
  printf("a = %d b = %d c = %d d = %d\n", *a, b, c, *d);
  return *d - *a + 2;
}