////Zachary Gill
////2014-09-15
////Calendar
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//  int days, day, wday, wdayStart;
//
//  printf("Enter the number of days in the month: ");
//  scanf("%d", &days);
//  printf("Enter the weeday the month starts on (1=Sun, 7=Sat): ");
//  scanf("%d", &wdayStart);
//
//  printf("Calendar: \n");
//
//  for (wday = 1; wday < wdayStart; wday++)
//    printf("   ");
//
//  day = 1;
//  do {
//    for (wday = wday; wday < 8; wday++) {
//      if (day <= days) {
//        printf("%3d", day);
//        day++;
//      }
//    }
//    wday = 1;
//    printf("\n");
//  } while (day <= days);
//
//  system("PAUSE");
//  return 0;
//}