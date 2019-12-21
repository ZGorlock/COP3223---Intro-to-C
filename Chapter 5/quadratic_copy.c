////Zachary Gill
////08-25-2014
////Quadric Equation
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(void) {
//  //declare variables
//  int    a, b, c;
//  double disc;
//  double root1, root2;
//
//  //input
//  printf("Enter in a: ");
//  scanf("%d", &a);
//  printf("Enter in b: ");
//  scanf("%d", &b);
//  printf("Enter in c: ");
//  scanf("%d", &c);
//
//  //calculations
//  disc = pow(b, 2) - 4 * a * c;
//  if (disc > 0) {
//    root1 = (-b + sqrt(disc)) / (2 * a);
//    root2 = (-b - sqrt(disc)) / (2 * a);
//    printf("The roots are %.2lf and %.2lf.\n", root1, root2);
//  }
//  else {
//    printf("The roots are imaginary.\n");
//  }
//
//  system("PAUSE");
//  return 0;
//}