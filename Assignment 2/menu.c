//Zachary Gill
//COP 3223 Fall 2014
//Section 2
//Assignment 2: Problem D
//09-19-2014

#define ARRAY_MAX 100

#define FIRST_CAR_LENGTH 10
#define NORMAL_CAR_LENGTH 8
#define CAR_CAPACITY 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numtrains(int, int);
int trainlength(int);

int main(void) {
  //declare variables
  int n, i, j;
  int n1, n2;
  
  int abundant;
  int t[ARRAY_MAX], a[ARRAY_MAX];
  
  int length;
  int maxtrainlength;
  int cars;
  int trainnum;
  int people;
  int totallength;

  double ratio[ARRAY_MAX];
  int ratios = 0;
  double ratioavg = 0.0;

  int bestpeople = 0;
  int bestcars = 0;

  int repeat = 0;
  char firstName[30];
  char name[30];
  
  //input
  printf("Please select an option.\n");
  printf("  1 - Abundant\n");
  printf("  2 - Coaster 2\n");
  printf("  3 - Last Names\n");
  printf("  4 - Exit\n");
  scanf("%d", &n);

  while (n < 4) {
    //initialize variables
    abundant = 0;

    if (n == 1) {

      //initialize variables
      abundant = 0;

      //input
      printf("Please enter n followed by n numbers: ");
      scanf("%d", &n1);
      for (i = 0; i < n1; i++) {
        t[i] = 0;
        scanf("%d", &t[i]);
      }

      //calculations
      for (i = 0; i < n1; i++) {
        a[i] = 0;
        for (j = 1; j <= t[i] / 2; j++) {
          if (t[i] % j == 0)
            a[i] += j;
        }
      }

      //output
      printf("\n");
      for (i = 0; i < n1; i++) {
        printf("Test case #%d: %d is ", i + 1, t[i]);
        if (a[i] > t[i])
          printf("abundant.");
        else
          printf("NOT abundant.");
        printf("\n");
      }

    }
    else if (n == 2) {

      //initialize variables
      ratios = 0;
      ratioavg = 0.0;
      bestpeople = 0;
      bestcars = 0;

      //input
      printf("What is the total length of the track, in feet?\n");
      scanf("%d", &length);
      printf("What is the maximum length of a train, in feet?\n");
      scanf("%d", &maxtrainlength);

      //calculations
      cars = 1;
      while (trainlength(cars) <= maxtrainlength) {
        trainnum = numtrains(length, cars);
        people = trainnum * cars * CAR_CAPACITY;
        if (people > bestpeople) {
          bestpeople = people;
          bestcars = cars;
        }
        else if (people == bestpeople) {
          if (cars < bestcars) {
            bestpeople = people;
            bestcars = cars;
          }
        }
        totallength = trainnum * trainlength(cars);
        ratio[ratios] = (double)people / totallength;
        ratios++;

        cars++;
      }

      for (i = 0; i < ratios; i++)
        ratioavg += ratio[i];
      ratioavg /= ratios;

      //output
      printf("Your ride can have at most %d people on it at one time.\n", bestpeople);
      printf("This can be achieved with trains of %d cars.\n", bestcars);
      printf("AVG Ratio: %.3lf\n", ratioavg);

    }
    else if (n == 3) {

      //initialize variables
      repeat = 0;

      //input
      printf("Enter n, followed by n Last names (each last name must be a single word) : \n");
      scanf("%d", &n2);
      if (n2 > 0)
        scanf("%s", &firstName);
      for (i = 1; i < n2; i++) {
        scanf("%s", &name);
        if (strcmp(firstName, name) == 0)
          repeat = 1;
      }

      //output
      if (repeat)
        printf("First name in list is repeated.\n");
      else
        printf("First name in list is not repeated.\n");

    }
    else if (n != 4) {
      printf("Sorry that was invalid.\n");
    }

    //input
    printf("\n");
    printf("Please select an option.\n");
    printf("  1 - Abundant\n");
    printf("  2 - Coaster 2\n");
    printf("  3 - Last Names\n");
    printf("  4 - Exit\n");
    scanf("%d", &n);
  }

  system("PAUSE");
  return 0;
}

int numtrains(int tracklength, int cars)
{
  return (int)(((double)tracklength / 4) / trainlength(cars));
}

int trainlength(int cars)
{
  int length = 0;
  if (cars == 0)
    return 0;
  length += FIRST_CAR_LENGTH;
  length += NORMAL_CAR_LENGTH * (cars - 1);
  return length;
}