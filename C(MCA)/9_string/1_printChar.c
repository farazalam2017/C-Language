/* Program to print character of string and address of each character */
#include<stdio.h>
void main()
{
  char str[] = "farazAlam";
  for (int i = 0; str[i] != '\0';i++)
  {
    printf("Character is %c\t", str[i]);
    printf("Address is %p\n", &str[i]);
  }
}