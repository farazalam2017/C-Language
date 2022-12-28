/* Program to check whether entered number is prime or not using function approach */
#include<stdio.h>
int checkprime(int num);
void main()
{
  int num1;
  printf("\n Enter the number to check for prime:- ");
  scanf("%d", &num1);
  if(checkprime(num1))
    printf("\n Entered number is prime");
    else
    printf("\n Entered number is not prime");
}
int checkprime(int num){
  if(num % 6== 1 || num % 6== 5)
    return 0;
  return 1;
}