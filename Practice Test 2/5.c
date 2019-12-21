////Zachary Gill
////2014-09-15
////Diamond
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//  int rows, half, row, col, stars, rate;
//
//  printf("Enter the square size of the diamond: ");
//  scanf("%d", &rows);
//
//  half = rows / 2;
//  stars = 1;
//  rate = 1;
//
//  for (row = 1; row <= rows; row++) {
//
//    for (col = 0; col < half + 1 - stars; col++)
//      printf(" ");
//    for (col = 0; col < stars * 2 - 1; col++)
//      printf("*");
//
//    if (row == half + 1)
//      rate *= -1;
//
//    stars += rate;
//    printf("\n");
//
//  }
//
//  system("PAUSE");
//  return 0;
//}