// Progarm to print larger of two number using ternary operator
/* Syntax:- testExpression ? expression1 :expression2 */
#include<stdio.h>
void main()
{
  int a, b;
  printf("\n Enter the first number:- ");
  scanf("%d", &a);
  printf("\n Enter the second number:- ");
  scanf("%d", &b);
  a > b ? printf("\n %d is greater",a):printf("\n %d is greater",b);
}