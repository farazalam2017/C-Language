/* Program to check for even and odd number */
#include<stdio.h>
void main()
{
  int num1;
  printf(" Enter the number to check for even or odd:- ");
  scanf("%d", &num1);
  if(num1 %2== 0)
  {
    printf("\n %d is even number.", num1);
  }else
  {
    printf("\n %d is odd number.", num1);
  }
}