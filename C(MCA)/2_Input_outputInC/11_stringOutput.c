// %w.ns:- w is the specified field width. Decimal point and na are optional. If present then n specifies that only first n character of the string will be displayed and (w-n) are leading spaces
#include<stdio.h>
void main()
{
  printf("%3s", "FarazAlam");
  printf("\n%10s", "SEETA");
  printf("\n%.4s", "FARAZALAM");
  printf("\n%5.6s", "FRsdds");
}