#include<stdio.h>
int main(void)
{
  int a, b;
  printf("\n Enter the value of a and b:- ");
  scanf("%d%d", &a, &b);
  if(a < b)
  {
    printf(" a is less than b");
  }
  if(a<=b)
  {
    printf("\n a is less than equal to b");
  }
  if(a == b)
  {
    printf("\na is equal to b");
  }
  if(a != b)
  {
    printf("\n a is not equal to b");
  }
}