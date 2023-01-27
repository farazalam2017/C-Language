/* Program in accessing union memeber */
#include<stdio.h>
union result{
  int marks;
  char grade;
  float per;
}res;
void main()
{
  res.marks = 90;
  printf("Marks:- %d\n", res.marks);
  res.grade = 'A';
  printf("Grade:- %c\n", res.grade);
  res.per = 85.5;
  printf("Percentage:- %f\n", res.per);
  
}
