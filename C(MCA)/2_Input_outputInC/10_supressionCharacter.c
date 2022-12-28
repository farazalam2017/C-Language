//  *:- if we want to skip any input field we can specify * between the % sign and conversion specification. The input  value is read but its value is not assigned to any address. This character * is called supression character.
#include<stdio.h>
void main()
{
  int a, b, c;
  printf("Enter the integer number:- ");
  scanf("%d%*d%d", &a, &b, &c);
  printf("\n Entered value is:- %d, %d, %d", a, b, c);
}
//value c has garbage value