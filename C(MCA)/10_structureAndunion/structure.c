#include<stdio.h>
#include<string.h>
struct students
{
  char name[50];
  int rollNo;
  int marks;
}stu1, stu2;

void main()
{
  strcpy(stu1.name, "Faraz Alam");
  stu1.rollNo = 48;
  stu1.marks = 78;
  strcpy(stu2.name, "Pushkar rai");
  stu2.rollNo = 38;
  stu2.marks = 98;
  printf("Student 1 has full name as %s and roll number is %d and got %d marks\n", stu1.name, stu1.rollNo, stu1.marks);
  printf("Student 1 has full name as %s and roll number is %d and got %d marks", stu2.name, stu2.rollNo, stu2.marks);
}