/* Input and output string using gets and puts */
#include<stdio.h>
void main()
{
  char name[30];
  printf("Enter a name:- ");
  gets(name);
  printf("Entered name is:- ");
  puts(name);
}
