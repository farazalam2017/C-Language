/* Created By Visual Studio Code
Author:- Faraz Alam
Email:- farazalam2017@gmail.com
Date: 2022-11-14 19:13:03
Title: 4_moreThanOneValueEnter.c */
#include<stdio.h>
int main()
{
  int basic;
  float hra;
  char grade;
  printf("Enter the basic salary(int), hra(float), and grade(char):- \n");
  scanf("%d %f %c", &basic, &hra, &grade);
  printf("\n Entered salary is %d, hra is %f and grade is %c :-", basic, hra, grade);
  return 0;
}