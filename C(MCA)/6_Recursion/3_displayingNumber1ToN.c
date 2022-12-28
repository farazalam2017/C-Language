/* Displaying number from 1 to n */
#include<stdio.h>
void display(int n);
void main()
{
  int num1;
  printf("\n Enter the number upto where you want to display:- ");
  scanf("%d", &num1);
  display(num1);
}
void display(int n)
{
  if(n == 0)
    return;
  display(n - 1);
  printf(" %d", n);
}