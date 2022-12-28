// %wd:- d is specification character for integer value and w is an integer number specifying the maximum field width of input data
#include<stdio.h>
void main()
{
  int num1;
  printf("Enter the number:- ");
  scanf("%d", &num1);
  printf("\n Enter number is:- %3d", num1);
}