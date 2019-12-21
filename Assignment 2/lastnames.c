//Zachary Gill
//COP 3223 Fall 2014
//Section 2
//Assignment 2: Problem C
//09-17-2014

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  //declare variables
  int repeat = 0;
  int n, i;
  char firstName[30];
  char name[30];

  //input
  printf("Enter n, followed by n Last names (each last name must be a single word) : \n");
  scanf("%d", &n);
  if (n > 0)
    scanf("%s", &firstName);
  for (i = 1; i < n; i++) {
    scanf("%s", &name);
    if (strcmp(firstName, name) == 0)
      repeat = 1;
  }

  //output
  if (repeat)
    printf("First name in list is repeated.\n");
  else
    printf("First name in list is not repeated.\n");

  system("PAUSE");
  return 0;
}