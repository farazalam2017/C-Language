/* Program to find the grade of students when the marks of four subjects are given */
/* 
per >= 85=> grade A
per <85 && per>= 70=> grade B
per <70 && per >= 55=> grade C
per <55 && per >= 40=> grade D
per <40=> grade E
*/
#include<stdio.h>
void main()
{
  float sub1, sub2, sub3, sub4, total, per;
  char grade;
  printf("\n Enter the marks for 4 subjects:- ");
  scanf("%f%f%f%f", &sub1, &sub2, &sub3, &sub4);
  total = sub1 + sub2 + sub3 + sub4;
  per = total / 4;
  if(per>=85)
  {
    printf("\n Grade is:- %c", 'A');
  }else if(per >= 70)
  {
    printf("\n Grade is:- %c", 'B');
  }else if(per>= 55)
  {
    printf("\n Grade is:- %c", 'C');
  }else
  {
    printf("\n Grade is:- %c", 'D');
  }

}