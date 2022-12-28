/* Program to multiply two numbers without * operator */
#include<stdio.h>
void main()
{
  int a, b, result= 0;
  printf("\n Enter the value of a and b:- ");
  scanf("%d %d", &a, &b);
  for (int i = 1; i <= b;i++)
  {
    result = result + a;
  }
  printf("%d * %d= %d", a, b, result);
}