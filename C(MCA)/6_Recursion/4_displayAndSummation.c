/* Program to display and find out the sum of series */
#include<stdio.h>
int series(int n);
void main()
{
  int num;
  printf(" Enter the number upto where you want the sum:- ");
  scanf("%d", &num);
  printf("\n Sum is:- %d",series(num));
}

int series(int n)
{
  int sum;
  if(n==0)
    return 0;
  sum = n + series(n - 1);
  printf("%d + ", n);
  return sum;
}