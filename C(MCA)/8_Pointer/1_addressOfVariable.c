/* Program to print the address of variable using address operator */
#include<stdio.h>
int main(void)
{
  int age = 30;
  float salary = 1500.65;
  printf("\n Address of age is %p", &age);
  printf("\n Address of salary is %p", &salary);

}