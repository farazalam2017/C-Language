/* Program to understand array within structures */
#include<stdio.h>
struct student{
  char name[20];
  int rollNo;
  int subMarks[4];
}stuarr[3];
void main()
{
  int i, j;
  int sum ;
  for (i = 0; i < 2;i++)
  {
    printf("Enter details of students:- \n");
    printf("Enter the %d name:- ", i + 1);
    scanf("%s", &stuarr[i].name);
    printf("Enter the %d roll number:- ", i + 1);
    scanf("%d", &stuarr[i].rollNo);
    for (j = 0; j < 2;j++)
    {
      printf("Enter the marks of %d subject:- ", j + 1);
      scanf("%d", &stuarr[i].subMarks[j]);
    }
  }
  printf("\n");
  printf("Name\tRollNo.\tAverage\n\n");
  for (i = 0; i < 2;i++)
  {
    sum = 0;
    for (j = 0; j < 2;j++)
    {
      sum = sum + stuarr[i].subMarks[j];
    }
    printf("%s\t%d\t%d\n", stuarr[i].name, stuarr[i].rollNo, sum/2);
  }
}