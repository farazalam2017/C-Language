/* Program to find the factorial of number */
#include<stdio.h>
int fact(int num1);
void main()
{
  int num;
  printf("\n Enter the number:- ");
  scanf("%d", &num);
  if(num < 0)
    printf("\n factorial of negative not possible");
  else
    printf("\n Factorial of number is:- %d", fact(num));
}

int fact(int num1)
{
  if(num1 == 0)
    return 1;
  return (num1 * fact(num1 - 1));
}