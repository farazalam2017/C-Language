#include<stdio.h>
int sum(int x, int y);
int main()
{
  int num1, num2;
  printf("Enter the two numbers:- ");
  scanf("%d%d",&num1, &num2);
  printf("\n Sum of two number is:- %d", sum(num1, num2));
}

int sum(int x, int y)
{
  return (x + y);
}