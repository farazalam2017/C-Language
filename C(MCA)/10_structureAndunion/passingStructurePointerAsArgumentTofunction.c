/* Passing Structure Pointer as argument to function */
#include<stdio.h>
#define MAX 30
struct employees{
  char name[MAX];
  int age;
  char DOJ[MAX];//date of joining
  char designation[MAX];
};
void print_Structure(struct employees *);
int main()
{
  struct employees dev = {"James", 25, "25/2/2015", "Developer"};
  struct employees max = {"Jordan", 32, "23/12/2099", "Time Traveler"};
  print_Structure(&dev);
  print_Structure(&max);
  return 0;
}
void print_Structure(struct employees *ptr){

  printf("Name:- %s\n", ptr->name);
  printf("Age:- %d\n", ptr->age);
  printf("Date of joining:- %s\n", ptr->DOJ);
  printf("Age:- %s\n", ptr->designation);
  printf("\n");
}