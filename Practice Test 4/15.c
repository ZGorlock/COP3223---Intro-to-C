//#include <stdio.h>
//#include <stdlib.h>
//#define         SIZE    10
//
//void Print_Array(int values[], int length);
//void swap(int values[], int i, int j);
//void Move_Max(int values[], int max_index);
//void Simple_Sort(int values[], int length);
//
//int main() {
//
//  int my_vals[SIZE] = {84, 91, 17, 55, 42, 36, 55, 29, 74, 67};
//
//  printf("original array : ");
//  Print_Array(my_vals, SIZE);
//
//  Simple_Sort(my_vals, SIZE);
//
//  system("PAUSE");
//  return 0;
//}
//
//void Simple_Sort(int values[], int length)
//{
//  int i;
//  for (i=length-1; i> 0; i--)
//  {
//    Move_Max(values, i);
//    Print_Array(values, SIZE);
//  }
//}
//
//void Move_Max(int values[], int max_index)
//{
//  int max, i, maxi;
//  max = values[0];
//  maxi = 0;
//  for (i=1; i<=max_index; i++)
//  {
//    if (max < values[i])
//    {
//      max = values[i];
//      maxi = i;
//    }
//  }
//  swap(values, maxi, max_index);
//}
//
//void swap(int values[], int i, int j)
//{
//  int temp;
//  temp = values[i];
//  values[i] = values[j];
//  values[j] = temp;
//}
//
//void Print_Array(int values[], int length)
//{
//  int i;
//  for (i=0; i<length; i++)
//    printf("%d ", values[i]);
//  printf("\n");
//}
//
