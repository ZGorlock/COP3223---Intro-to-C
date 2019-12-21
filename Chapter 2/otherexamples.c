////Zachary Gill
////Other Examples
////08-18-2014
////Other examples from Chapter 2
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//
//  //declarations
//  float tax_purchase = 10.00;
//  float tax_tax = 0.06;
//  float tax_total;
//
//  int   rect_length = 5;
//  int   rect_width = 18;
//  float rect_area;
//
//  int   tri_base = 10;
//  int   tri_height = 5;
//  float tri_area;
//
//  int   finaid_grants = 2000;
//  int   finaid_loans = 10000;
//  int   finaid_total;
//
//  float tb_1 = 50.00;
//  float tb_2 = 61.25;
//  float tb_3 = 45.95;
//  float tb_4 = 80.00;
//  float tb_5 = 64.11;
//  float tb_total;
//
//  int   grandma_total = 200;
//  int   grandma_kids = 5;
//  float grandma_each;
//
//  int   cup_current = 2014;
//  int   cup_freq = 5;
//  int   cup_next;
//
//  //calculations
//  tax_total = tax_purchase * tax_tax + tax_purchase;
//  rect_area = rect_length * rect_width;
//  tri_area = 0.5 * tri_base * tri_height;
//  finaid_total = finaid_grants + finaid_loans;
//  tb_total = tb_1 + tb_2 + tb_3 + tb_4 + tb_5;
//  grandma_each = grandma_total / grandma_kids;
//  cup_next = cup_current + cup_freq;
//
//  //output
//  printf("Before Tax: %f   After Tax: %f\n\n", tax_purchase, tax_total);
//  printf("Rectangle-  Length: %d   Width: %d   Area: %f\n\n", rect_length, rect_width, rect_area);
//  printf("Triangle-   Base: %d   Width: %d  Area: %f\n\n", tri_base, tri_height, tri_area);
//  printf("Financial Aid-  Grants: %d  Loans: %d  Total: %d\n\n", finaid_grants, finaid_loans, finaid_total);
//  printf("Textbooks-  1:%f  2:%f,  3:%f,  4:%f,  5:%f  Total: %f\n\n", tb_1, tb_2, tb_3, tb_4, tb_5, tb_total);
//  printf("Grandma-  Total Money: %d   Kids: %d  Each: %f\n\n", grandma_total, grandma_kids, grandma_each);
//  printf("Next Cup Year: %d\n\n", cup_next);
//
//  system("PAUSE");
//  return 0;
//}