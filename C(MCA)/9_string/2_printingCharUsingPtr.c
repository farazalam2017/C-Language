/* Program to print the address and character of string using pointer notation */
#include<stdio.h>
void main()
{
  char str[] = "ILOVEINDIA";
  char *ptr;
  ptr = str;
  while(*ptr!='\0')
  {
    printf("Character is:- %c\n", *ptr);
    printf("Address is:- %p\n", ptr);
    ptr++;
  }
  
}