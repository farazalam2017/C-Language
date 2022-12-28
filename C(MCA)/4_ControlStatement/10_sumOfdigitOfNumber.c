#include<stdio.h>
void main()
{
  int num1, rem, sum= 0;
  printf("\n Enter the number:- ");
  scanf("%d", &num1);
  while(num1!=0)
  {
    rem = num1 % 10;
    sum = sum + rem;
    num1 = num1 / 10;
  }
  printf("Sum of the numbers is:- %d", sum);
}