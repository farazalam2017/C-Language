/* Program to find quotient and remainder */
#include<stdio.h>
void main()
{
  int divident, divisor, quotient, remainder;
  printf(" Enter the divident:- ");
  scanf("%d", &divident);
  printf("\n Enter the divisor:- ");
  scanf("%d", &divisor);
  if(divident)
  {
    quotient = divident / divisor;
    remainder = divident % divisor;
    printf("Quotient is:- %d, and remainder is %d", quotient, remainder);
  }else
  {
    printf("\n Divide by zero error ");
  }
}