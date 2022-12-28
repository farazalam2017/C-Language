/* Function with argument and retrun type */
/* Sum of digit of any number */
#include<stdio.h>
int sumOfdigit(int);
void main()
{
  int y;
  printf("\n Enter the number:- ");
  scanf("%d", &y);
  printf("\n Sum of digit of entered number is:- %d", sumOfdigit(y));
}

int sumOfdigit(int x)
{
  int rem, sum = 0;
  while(x!=0)
  {
    rem = x % 10;
    sum = sum + rem;
    x = x / 10;
  }
  return sum;
}