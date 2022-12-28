/* If number is divided by 6 if remainder is 1 or 5 then that number is prime number */
#include<stdio.h>
void main()
{
  // int num1;
  // printf(" Enter the number:- ");
  // scanf("%d", &num1);
  for (int i = 1; i <= 100;i++)
    if (i % 6 == 1 || i % 6 == 5)
    {
      printf("\n%d", i);
      // printf(" %d is prime number.", num1);
    }
    else
    {
      // printf(" %d is not prime number.", num1);
    }
}