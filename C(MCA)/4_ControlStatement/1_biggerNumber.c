/* Program to print bigger number */
#include<stdio.h>
int main()
{
  int num1, num2;
  printf("\n Enter the two numbers:- ");
  scanf("%d%d", &num1, &num2);
  if(num1 > num2)
  {
    printf("\n %d is greater than %d", num1, num2);
  }else
  {
    printf("\n %d is greater than %d", num2, num1);
  }
}