/* Program to check whether number is positive or negative */
#include<stdio.h>
void main()
{
  int num1;
  printf("\n Enter the number:- ");
  scanf("%d", &num1);
  if(num1 < 0)
  {
   printf("\n %d is negative number.", num1);
   }else
   {
  printf("\n You entered Positive One");
  }
}