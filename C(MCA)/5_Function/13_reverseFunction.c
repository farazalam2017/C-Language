/* Write a function reverse() that input a number and returns the reverse of that number. */
#include<stdio.h>
int reverse(int n);
void main()
{
  int num;
  printf(" Enter the number:- ");
  scanf("%d", &num);
  printf("\n Reverse of the %d is :- %d", num, reverse(num));
}

int reverse(int n){
  int num1;
  int rem;
  int reverse= 0;
  do{
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n = n / 10;
  } while (n != 0);
  return reverse;
}