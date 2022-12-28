#include<stdio.h>
int larger(int x, int y);
int main(void)
{
  int x, y;
  printf("Enter the two numbers:- ");
  scanf("%d%d", &x,&y);
  printf("\n Larger between %d and %d is:- %d", x, y, larger(x, y));
}
int larger(int x, int y)
{
  return (x > y ? x : y);
}