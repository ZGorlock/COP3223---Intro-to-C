//Zachary Gill
//COP 3223 Fall 2014
//Section 2
//Assignment 1: Problem B
//08-27-2014

#define WALK_CAL 5
#define STAND_CAL 2
#define DRINK_CAL 20
#define FOOD_CAL 40
#define CALS_PER_POUND 3500

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //declare variables
  int    walk_min;
  int    stand_min;
  int    drink_min;
  int    food_min;
  double total;
  double pounds;

  //intput
  printf("How many minutes were you walking?\n");
  scanf("%d", &walk_min);
  printf("How many minutes were you standing?\n");
  scanf("%d", &stand_min);
  printf("How many minutes were you drinking?\n");
  scanf("%d", &drink_min);
  printf("How many minutes were you eating?\n");
  scanf("%d", &food_min);
  
  //calculations
  total = 0;
  total += food_min  * FOOD_CAL;
  total += drink_min * DRINK_CAL;
  total -= walk_min  * WALK_CAL;
  total -= stand_min * STAND_CAL;

  pounds = total / CALS_PER_POUND;
  pounds *= -1;

  //output
  if (pounds < 0)
    printf("Weight lost is %.3lf pounds.\n", pounds);
  else
    printf("You lost %.3lf pounds today!\n", pounds);

  system("PAUSE");
  return 0;
}