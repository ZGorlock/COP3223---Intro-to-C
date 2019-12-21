#include <stdio.h>
#include <stdlib.h>

int main()
{
  int day, NumDays, wday, Start, week, ThisWeek;
  scanf("%d", &NumDays);
  scanf("%d", &Start);
  scanf("%d", &ThisWeek);
  week = 1;

  for (wday = 1; wday < Start; wday++)
    printf("    ");

  for (day = 1; day <= NumDays; day++) {
    printf("%3d", day);
    if (week == ThisWeek && day % ThisWeek == 0)
      printf("*");
    else
      printf(" ");
    wday++;
    if (wday == 8) {
      printf("\n");
      week++;
      wday = 1;
    }
  }
  printf("\n");

  system("PAUSE");
  return 0;
}