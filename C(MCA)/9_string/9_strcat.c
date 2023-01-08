/* strcat() function */
/* 
strcat() used to copy a string at the end of string. null character is removed from str1 and str2 is added at end of str1. str2 remains unaffected. A pointer to the first string str1 is returned 
 */
#include<stdio.h>
#include<string.h>
void main()
{
  char str1[20], str2[20];
  printf("Enter two strings:- ");
  gets(str1);
  gets(str2);
  strcat(str1, str2);
  printf("Concanated string is:- %s\n", str1);
}