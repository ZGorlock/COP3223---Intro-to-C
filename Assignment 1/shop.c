//Zachary Gill
//COP 3223 Fall 2014
//Section 2
//Assignment 1: Problem A
//08-27-2014

#define TAX_RATE 0.065

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //declare variables
  double price;
  int    quantity;
  int    taxed;
  double total;

  //input
  printf("What is the price of the item to be purchased (in dollars)?\n");
  scanf("%lf", &price);
  printf("How many of the item are you are purchasing?\n");
  scanf("%d", &quantity);
  printf("Is the item taxed (1 = yes, 0 = no)?\n");
  scanf("%d", &taxed);

  //calculations
  total = price * quantity * (1 + (TAX_RATE * taxed));

  //output
  printf("Your total purchase will cost $%.2lf.\n", total);

  system("PAUSE");
  return 0;
}