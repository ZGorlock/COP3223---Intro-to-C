//                     // DRAW a DIAMOND
//#include <stdio.h>
//#include <stdlib.h>
//
//#define TOTAL_ROWS 15
//int main() {
//
//  int row, col, numstars=1;
//  int half, rate = 1;
//
//  // Loop through each row.
//  for (row=1; row<=TOTAL_ROWS; row++) {
//
//     half= TOTAL_ROWS/2;
//    
//     // Draw the blanks before the stars
//     for (col=0; col< half + 1 -numstars; col++)
//       printf(" ");
//  
//     // Draw the stars
//     for (col=1; col<= 2*numstars - 1; col++)
//       printf("*");
//      
//     // If we hit the middle of the diamond, negate the rate.
//     if ((numstars == (half + 1)))
//       rate = -rate;
//   
//     // Change numstars by the rate
//     numstars = numstars + rate;    
//
//     // Go to the new line.
//     printf("\n");
//  }
// system("pause");
//  return 0;
//}
