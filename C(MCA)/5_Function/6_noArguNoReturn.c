/* Function with no argument and no return type */
#include<stdio.h>
void displayMenu(void);

void main()
{
  int choice;
  displayMenu();
  printf("Enter your choice:- ");
  scanf("%d", &choice);
}

void displayMenu(void)
{
  printf("1. Create database:- \n");
  printf("2. Insert new record:- \n");
  printf("3. Modify a record:- \n");
  printf("4. Delete a record:- \n");
  printf("5. Exit:- \n");
}