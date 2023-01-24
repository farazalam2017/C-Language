/* Pointer as structure member */
#include<stdio.h>
struct student
{
  char *name;
  int age;
  char *program;
  char *subject[5];
};
int main(void)
{
  struct student stu = {
      "Lucy",
      25,
      "CS",
      {"CS-01", "CS-02", "CS-03", "CS-04", "CS-05"}};
    struct student *ptr = &stu;
    int i;
    printf("\n\nAccessing members using structure variable:-\n");
    printf("Name:- %s\n", stu.name);
    printf("Age:- %d\n", stu.age);
    printf("Program enrolled:- %s\n", stu.program);
    for (i = 0; i < 5;i++)
    {
      printf("Subject:- %s\n", stu.subject[i]);
    }
    printf("\n\nAccessing the members using pointer variable:- \n");
    printf("Name:- %s\n", ptr->name);
    printf("Age:- %d\n", ptr->age);
    printf("Program enrolled:- %s\n", ptr->subject);
    for (i = 0; i < 5;i++)
    {
      printf("Subject:- %s\n", ptr->subject[i]);
    }
}

