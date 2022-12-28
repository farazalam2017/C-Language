/* Note:- do-while can be used for checking validity of entered data. Suppose we want the user to enter ID and valid ID are in the range 100 to 500 only. If the user enter an invalid ID we want to ignore that ID and again ask him to enter another one, and this process continue till we enter the valid ID */
#include<stdio.h>
void main()
{
int num1;
{
  do
  {
    
    printf(" Enter the employee ID between 100 and 500 only");
    scanf("%d", &num1);
  } while (num1 < 100 || num1 > 500);
  printf("\n Entered ID is:- %d", num1);
}
}