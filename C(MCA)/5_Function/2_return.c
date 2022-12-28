#include<stdio.h>
void selection(int age, int height);
void main()
{
  int age;
  float height;
  printf("Enter the age and height:- ");
  scanf("%d%f", &age, &height);
  selection(age, height);
}

void selection(int age, int height)
{
  if(age>25)
  {
    printf(" Age should be less than 25 ");
  }else
  {
    printf("Height should be more than 5 \n");
  }
}