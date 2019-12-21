//Zachary Gill
//COP 3223 Fall 2014
//Section 2
//Assignment 1: Problem C
//08-27-2014

#define FIRST_CAR_LENGTH 10
#define NORMAL_CAR_LENGTH 8
#define CAR_CAPACITY 4

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //declare variables
  int n, i;
  int length;
  int maxTrainLength;
  int maxTrainsLength;
  int trainLength;
  int trainDif;
  int cars;
  int trainNum;
  int people;

  //input
  printf("What is the value for N?\n");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    //input
    printf("What is the total length of the track, in feet?\n");
    scanf("%d", &length);
    printf("What is the maximum length of a train, in feet?\n");
    scanf("%d", &maxTrainLength);

    //calculations
    cars = 1;
    cars += ((maxTrainLength - FIRST_CAR_LENGTH) / NORMAL_CAR_LENGTH);

    trainLength = (cars - 1) * NORMAL_CAR_LENGTH + FIRST_CAR_LENGTH;
    trainDif = maxTrainLength - trainLength;
    
    trainNum = ((double)length / 4) / trainLength;
    people = cars * CAR_CAPACITY * trainNum;

    //output
    printf("Your ride can have at most %d people on it at one time.\n", people);
    if (trainDif > 0)
      printf("Maximum Train Length has surplus of %d feet\n", trainDif);
    else
      printf("Maximum Length fits exactly\n");
  } // end for loop

  system("PAUSE");
  return 0;
}