////Zachary Gill
////2014-09-15
////Diamond
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//  int rows = 31;
//  int stars = 1;
//  int half = rows / 2;
//  int row, col;
//  int rate = 1;
//
//
//  for (row = 1; row <= rows; row++) {
//
//    //diamond
//    //for (col = 0; col < half + 1 - stars; col++)
//    //  printf(" ");
//    //for (col = 1; col <= stars * 2 - 1; col++)
//    //  printf("*");
//    //if (row == half + 1)
//    //  rate *= -1;
//
//    //half diamond
//    for (col = 1; col <= stars; col++)
//      printf("*");
//    if (row == half + 1)
//      rate *= -1;
//
//    stars += rate;
//    printf("\n");
//  }
//
//  system("PAUSE");
//  return 0;
//}