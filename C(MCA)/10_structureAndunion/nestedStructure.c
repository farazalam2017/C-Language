/* WAP to demonstrate working of nested structure */
#include<stdio.h>
#include<string.h>
#define MAX 30
struct person{
  char name[MAX];
  int age;
  char DOB[MAX];
};
struct student {
  int rollNo;
  int marks;
  struct person info;
}s1,s2;

void main()
{
  printf("Enter the details of student:- \n\n");
  printf("Enter the name:- ");
  scanf("%s",s1.info.name);
  printf("Enter the age:- ");
  scanf("%d",&s1.info.age);
  printf("Enter the date of birth:- ");
  scanf("%s",s1.info.DOB);
  printf("Enter the roll number:- ");
  scanf("%d",&s1.rollNo);
  printf("Enter the marks:- ");
  scanf("%d",&s1.marks);
  printf("\n ***************************************************\n");
  printf("Name:- %s\n", s1.info.name);
  printf("Age:- %d\n", s1.info.age);
  printf("Date of birth:- %s\n", s1.info.DOB);
  printf("ROll Number:- %d\n", s1.rollNo);
  printf("Marsks:- %d\n", s1.marks);

}