//// Arup Guha
//// 1/21/2010, written in COP 3223 class
//// Program using mod, determines the units digit and tens digit of a number.
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    
//    // Get the user input
//    int n;
//    printf("Enter an integer\n");
//    scanf("%d", &n);
//    
//    // Use mod to split out the units digit.
//    int units = n%10;
//    
//    // Use integer division to get the rest of the number, then mod
//    // to get the original tens digit.
//    int tens = (n/10)%10;
//    
//    // Output both.
//    printf("units digit is %d\n", units);
//    printf("tens digit is %d\n", tens);
//
//    system("PAUSE");
//    return 0;
//}