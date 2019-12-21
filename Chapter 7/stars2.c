//
//// Arup Guha
//// 1/27/04
//// Program used in lecture to illustrate nested loops. This particular
//// program prints out stars in a triangle shape.
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define TOTAL_ROWS 10
//int main() {
//
//  int row, col, numstars=1;
//  int rate = 3;
//
//  // Loop through each row.
//  for (row=1; row<=2*TOTAL_ROWS; row++) {
//
//    // Print out the right number of stars.
//    for (col=1; col<=numstars; col++)
//      printf("*");
//
//    // If we hit the middle of the triangle, negate the rate.
//    if (numstars == TOTAL_ROWS)
//      rate = -1;
//   
//    // Change numstars by the (arithmetic) rate
//    numstars = numstars + rate;    
//
//    // Go to the new line.
//    printf("\n");
//  }
// system("pause");
//  return 0;
//}
