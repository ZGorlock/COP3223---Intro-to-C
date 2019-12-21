//Zachary Gill
//COP 3223 Fall 2014
//Section 2
//Assignment 2: Problem A
//09-08-2014

#define ARRAY_MAX 100

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //declare variables
  int n, i, j;
  int abundant = 0;
  int t[ARRAY_MAX], a[ARRAY_MAX];

  //input
  printf("Please enter n followed by n numbers: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    t[i] = 0;
    scanf("%d", &t[i]);
  }

  //calculations
  for (i = 0; i < n; i++) {
    a[i] = 0;
    for (j = 1; j <= t[i] / 2; j++) {
      if (t[i] % j == 0)
        a[i] += j;
    }
  }

  //output
  printf("\n");
  for (i = 0; i < n; i++) {
    printf("Test case #%d: %d is ", i + 1, t[i]);
    if (a[i] > t[i])
      printf("abundant.");
    else
      printf("NOT abundant.");
    printf("\n");
  }

  system("PAUSE");
  return 0;
}