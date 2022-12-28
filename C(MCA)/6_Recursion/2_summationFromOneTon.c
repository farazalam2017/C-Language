/* Summation from 1 to n  */
#include<stdio.h>
int summation(int num);
void main()
{
  int num1;
  printf("\n Enter  the number upto which you want summation:- ");
  scanf("%d", &num1);
  printf("\n Summation of the numbers are:- %d", summation(num1));
}
int summation(int num)
{
  if(num == 0)
    return 0;
  return (num + summation(num - 1));
}