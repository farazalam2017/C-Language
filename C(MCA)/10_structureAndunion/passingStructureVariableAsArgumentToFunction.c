/* Passing structure variable as argument to a function */
#include<stdio.h>
struct student{
  char name[20];
  int rollNo;
  int marks;
};
void print_structure(struct student stu);
int main()
{
  struct student stu = {"Alam", 10, 67};
  print_structure(stu);//pass whole structure as argument
  return 0;
}
void print_structure(struct student stu){
  printf("Name:- %s\n", stu.name);
  printf("Roll Number:- %d\n", stu.rollNo);
  printf("Marks:- %d\n", stu.marks);
}