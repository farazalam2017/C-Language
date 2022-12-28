/* Program to check for leap year */
#include<stdio.h>
void main()
{
  int year;
  printf(" Enter the year:- ");
  scanf("%d", &year);
  if(year % 100 != 0)
  {
    if(year % 4== 0)
    {
      printf("\n %d is leap year", year);
    }else
    {
      printf("\n %d is not leap year", year);
    }

  }else
  {
    if(year %400 == 0)
    {
      printf("\n %d is leap year", year);
    }else
    {
      printf("\n %d is not leap year", year);
    }
  }
}