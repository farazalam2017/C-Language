/* Program to understand strcmp() function */
/* Note:- 
strcmp() used for comparison of strings. If two strings match it returns zero otherwise non- zero value. It compare strings character by character, and comparison stops when either the end of string is reached or corresponding characters in th string are not same
  <0 when s1<s2
  =0 when s1= s2
  >0 when s1>s2
 */
/*
Array version
int strcmp(char str1[], char str2[]){
  int i;
  for(i= 0; str1[i] == str2[i];i++){
    if(str1[i] == '\0)
    return 0;
    return (str1[i]- str2[i]);
  }
}
 */
#include<stdio.h>
#include<string.h>
void main()
{
  char str1[30], str2[30];
  printf("Eneter two strings:- ");
  gets(str1);
  gets(str2);
  if(strcmp(str1, str2) == 0)
    printf("Entered strings are same.\n");
    else
    printf("Entered strings are not same. ");
}
