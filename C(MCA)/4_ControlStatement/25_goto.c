/* Program to understand goto */
#include<stdio.h>
void main()
{
  int n;
  printf(" Enter the number:- ");
  scanf("%d", &n);
  if(n %2 == 0)
  {
    goto even;
    goto end;
  }else
  {
    goto odd;
    goto end;
  }
  even:
  {
  printf("\n Entered number is even");
  }
  odd:
  {
  printf("\n Entered number is odd");
  }
  end:
  {
  printf("\n");
  }
}