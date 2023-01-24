/* Program to understand pointer to structure */
#include<stdio.h>
#include<string.h>
struct student {
  char name[30];
  int rollNo;
  int marks;
}s1, *ptr;
void main()
{
  ptr = &s1;
  strcpy(s1.name, "Faraz Alam");
  s1.rollNo = 12;
  s1.marks = 98;
  printf("Name:-%s", ptr->name);
  printf("\nRoll Number:- %d", ptr->rollNo);
  printf("\nMarks :- %d", ptr->marks);
}