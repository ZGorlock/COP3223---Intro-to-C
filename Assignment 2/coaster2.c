//Zachary Gill
//COP 3223 Fall 2014
//Section 2
//Assignment 2: Problem B
//09-11-2014

#define FIRST_CAR_LENGTH 10
#define NORMAL_CAR_LENGTH 8
#define CAR_CAPACITY 4

#define ARRAY_MAX 100

#include <stdio.h>
#include <stdlib.h>

int numtrains(int, int);
int trainlength(int);

int main(void) {
  //declare variables
  int i;
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