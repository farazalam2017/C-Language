// %wf:- w is the integer specifying the total width of the data including the digits before and after the decaimal and decimal point
#include<stdio.h>
void main()
{
  float num1;
  printf("Enter the floating point number:- ");
  scanf("%5f", &num1);
  printf("\n Entered number is:- %f", num1);
}