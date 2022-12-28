/* Program to display the values of structure members */
#include<bits/stdc++.h>
using namespace std;

struct student
{
  char name[20];
  int rollNumber;
  float marks;
};

int main(void)
{
  struct student stu1 = {"Mary", 25, 68};
  struct student stu2, stu3;
  strcpy(stu2.name, "John");
  stu2.rollNumber = 23;
  stu2.marks = 98;
  cout << "\n enter the name, roll number and marks for stu3:- ";
  cin >> stu3.name >> stu3.rollNumber >> stu3.marks;
  cout << " " << stu1.name << " " << stu1.rollNumber << " " << stu1.marks;
}