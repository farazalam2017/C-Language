/* Passing a structure members as argument to function */
/* #include<stdio.h>
struct student{
  char name[20];
  int rollNo;
  int marks;
};
void print_structure(char name[], int rollNo, int marks);
int main()
{
  struct student stu = {"Faraz Alam", 1, 78};
  print_structure(stu.name, stu.rollNo, stu.marks);
}
void print_structure(char name[], int rollNo, int marks){
  printf("Name:- %s\n", name);
  printf("Roll no.:- %d\n", rollNo);
  printf("Marks:- %d\n", marks);
  printf("\n");
} */
//Variation 
//Note:- The most important thing to note about this program is that stu.name is passed as a reference because name of the array is a constant pointer. So the formal argument of print_struct() function i.e name and stu.name both are pointing to the same array. As a result, any changes made by the function print_struct() will affect the original array.
#include<stdio.h>
#include<string.h>
struct student{
  char name[20];
  int rollNo;
  int marks;
};
void print_structure(char name[], int rollNo, int marks);
int main()
{
  struct student stu = {"Tim", 1, 98};
  print_structure(stu.name, stu.rollNo, stu.marks);
  printf("New name:- %s", stu.name);
}
void print_structure(char name[], int rollNo, int marks){
  printf("Name:- %s\n", name);
  printf("Roll no.:- %d\n", rollNo);
  printf("Marks:- %d\n", marks);
  printf("\nChanging name:- \n");
  strcpy(name, "Faraz");
  printf("\n");
}