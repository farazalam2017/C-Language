/* Sum of digits of an integer and displaying an integer */
#include<stdio.h>
int sumDigits(long int n);
void main()
{
  int num;
  printf(" Enter the number:- ");
  scanf("%d", &num);
  printf("\n Sum of digits of entered number is:- %d", sumDigits(num));
}
int sumDigits(long int n)
{
  if(n/10== 0)
    return n;
  return (n % 10 + sumDigits(n / 10));
}
