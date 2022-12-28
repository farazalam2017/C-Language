/* WAP to count digit of number */
#include<stdio.h>
void main()
{
  int n, count= 0;
  printf(" Enter the number:- ");
  scanf("%d", &n);
  do
  {
    n = n / 10;
    count++;
  } while (n > 0);
  printf("\n Digits in number is:- %d", count);
}

/* Note:- if we use while loop for input 0 it will give 0 instead of 1 */