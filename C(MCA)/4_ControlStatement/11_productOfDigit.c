#include<stdio.h>
void main()
{
  int num1,rem, product= 1;
  printf(" Enter the number:- ");
  scanf("%d", &num1);
  do
  {
    rem = num1 % 10;
    product = product * rem;
    num1 = num1 / 10;
  } while (num1 > 0);
  printf("Product of digits of number is:- %d", product);
}
/* Note:- if we use while loop for input 0, it will give 1 instead of 0 */