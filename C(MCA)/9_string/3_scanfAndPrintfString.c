/* Program to perform input and output using scanf() and printf() */
/* Note:- printf() takes the base address of string and continues to display character until it encounters the null character */
/* 
scanf()= stops reading as soon as it encounter whitespace. For entering strings with whitespace we use gets(). It stops reading when it encounter a newline and replaces this newline with null character
 */
#include<stdio.h>
void main()
{
  char name[40];
  printf("Enter the name:- ");
  scanf("%s", name);
  printf("%s %s\n", name,"Alam");
}