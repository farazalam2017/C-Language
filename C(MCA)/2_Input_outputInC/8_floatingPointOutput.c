// %w.nf:- w is the integer specifying the total width of the input data and n is the number of digit to be printed after decimal point. By default 6 digits are printed after decimal
#include<stdio.h>
void main()
{
  float num1;
  printf(" Enter the number:- ");
  scanf("%f", &num1);
  printf("\n Entered number is:- %4.2f", num1);
}