/* Program to find the greatest number from three given number */
#include<stdio.h>
void main()
{
  int num1, num2, num3;
  printf("\n Enter the three number:- ");
  scanf("%d%d%d", &num1, &num2, &num3);
  if(num1> num2)
  { 
    if(num1 > num3)
    {
      printf("\n %d is greater than %d and %d", num1, num3, num2);
    }else
    {
      printf("\n %d is greater than %d and %d", num3, num1, num2);
    }

  }else
  {
    if(num2 > num3)
    {
      printf("\n %d is greater than %d and %d", num2, num3, num1);
    }else
    {
      printf("\n %d is greater than %d and %d", num3, num2, num1);
    }

  }
}