//Zachary Gill
//COP 3223 Fall 2014
//Section 2
//Assignment 3
//10-03-2014

#define ARRAY_MAX 100
#define MAX_LENGTH 20

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int n, i;

  char donationTypes[ARRAY_MAX][MAX_LENGTH];
  int  donationAmounts[ARRAY_MAX];
  char requestTypes[ARRAY_MAX][MAX_LENGTH];
  int  requestAmounts[ARRAY_MAX];

  char tmpStr[MAX_LENGTH];
  int tmpInt;

  int donationCount = 0;
  int requestCount = 0;

  int found;

  do {
    printf("Welcome to the Food Bank Program\n\n");
    printf("  1. Add a donation\n");
    printf("  2. Add a request\n");
    printf("  3. Fulfill a request\n");
    printf("  4. Print status report\n");
    printf("  5. Exit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    printf("\n");

    if (n == 5) {
      printf("Thank you for using the software. Bye for now.\n\n");
    }
    else if (n == 4) {
      printf("Printing the Donations Table\n\n");
      for (i = 0; i < donationCount; i++)
        printf("%s %d\n", donationTypes[i], donationAmounts[i]);
      printf("\n");
      printf("Printing the Requests Table\n\n");
      for (i = 0; i < requestCount; i++)
        printf("%s %d\n", requestTypes[i], requestAmounts[i]);
      printf("\n");
    }
    else if (n == 3) {
      printf("-------- Fulfilling Requests--------\n\n");

      if (requestCount == 0) {
        printf("No Request to Fulfill\n\n");
      }
      else {
        found = -99;
        for (i = 0; i < donationCount; i++) {
          if (strcmp(requestTypes[0], donationTypes[i]) == 0)
            found = i;
        }

        if (found == -99) {
          printf("Cannot be Fulfilled\n\n");
        }
        else {
          if (donationAmounts[found] == requestAmounts[0]) {
            for (i = found + 1; i < donationCount; i++) {
              strcpy(donationTypes[i - 1], donationTypes[i]);
              donationAmounts[i - 1] = donationAmounts[i];
            }
            donationCount--;
            for (i = 1; i < requestCount; i++) {
              strcpy(requestTypes[i - 1], requestTypes[i]);
              requestAmounts[i - 1] = requestAmounts[i];
            }
            requestCount--;
            printf("Request Fulfilled\n\n");
          }
          else if (donationAmounts[found] < requestAmounts[0]) {
            requestAmounts[0] -= donationAmounts[found];
            for (i = found + 1; i < donationCount; i++) {
              strcpy(donationTypes[i - 1], donationTypes[i]);
              donationAmounts[i - 1] = donationAmounts[i];
            }
            donationCount--;
            printf("Partially Fulfilled\n\n");
          }
          else {
            donationAmounts[found] -= requestAmounts[0];
            for (i = 1; i < requestCount; i++) {
              strcpy(requestTypes[i - 1], requestTypes[i]);
              requestAmounts[i - 1] = requestAmounts[i];
            }
            requestCount--;
            printf("Request Fulfilled\n\n");
          }
        }
      }

    }
    else if (n == 2) {
      printf("Enter inventory type: ");
      scanf("%s", &tmpStr);
      printf("Enter the amount: ");
      scanf("%d", &tmpInt);
      printf("\n");

      strcpy(requestTypes[requestCount], tmpStr);
      requestAmounts[requestCount] = tmpInt;
      requestCount++;

      printf("Request Added!\n");
    }
    else if (n == 1) {
      printf("Enter inventory type: ");
      scanf("%s", &tmpStr);
      printf("Enter the amount: ");
      scanf("%d", &tmpInt);
      printf("\n");

      found = -99;
      for (i = 0; i < donationCount; i++) {
        if (strcmp(donationTypes[i], tmpStr) == 0)
          found = i;
      }

      if (found == -99) {
        strcpy(donationTypes[donationCount], tmpStr);
        donationAmounts[donationCount] = tmpInt;
        donationCount++;
      }
      else {
        donationAmounts[found] += tmpInt;
      }

      printf("Donation Added!\n");
    }
    else {
      printf("Invalid input. Please try again.\n\n");
    }

    system("PAUSE");
  } while (n != 5);

  return 0;
}