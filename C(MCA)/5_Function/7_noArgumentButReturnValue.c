/* Function with no argument but a return value */
#include<stdio.h>
int func(void);
void main()
{

  printf("\n Sum of all odd number from 1 to 25 is:- %d", func());
}
int func(void)
{
  int i, sum = 0;
  for (int i = 1; i <= 25;i++)
  {
    if(i%2!=0)
    {
      sum = sum + i;
    }
  }
  return sum;
}