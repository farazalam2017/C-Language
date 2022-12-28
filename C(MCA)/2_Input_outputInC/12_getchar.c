// getchar():- reads single input from user
// putchar():- output single character to user
#include<stdio.h>
void main()
{
  char ch;
  printf("Enter the character:- ");
  ch= getchar();
  printf("\n Entered character is:- ");
  putchar(ch);
}