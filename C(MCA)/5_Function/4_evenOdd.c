/* Note:- Name of the parameter while declaring a function are optional(only while declaring not defining). They are used for descriptive reasons, they inform the programmer about the purpose. compiler ignores their names */
#include<stdio.h>
void check(int );
void main()
{
  int num1;
  printf(" Enter the numbet:- ");
  scanf("%d", &num1);
  check(num1);
}

void check(int x)
{
  if(x %2 == 0)
  {
    printf("\n Entered number is even");
  }else
  {
    printf("\n Entered number is odd");
  }
}