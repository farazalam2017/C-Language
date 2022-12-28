#include<stdio.h>
void main()
{
  int choice;
  while(1)
  {
    printf("1. Create database \n");
    printf("2. Insert new record \n");
    printf("3. Modify record \n");
    printf("4. Delete record \n");
    printf("5. Display record \n");
    printf("6. Exit \n");
    printf(" Enetr your choice\n");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1:
        printf("Database created..... \n\n");
        break;
      case 2:
        printf("Record Inserted..... \n\n");
        break;
      case 3:
        printf("Record Modified..... \n\n");
        break;
      case 4:
        printf("Record deleted..... \n\n");
        break;
      case 5:
        printf("Record displayed..... \n\n");
        break;
      case 6:
        exit(1);
        default:
        printf("Wrong choice \n");
    }
  }
}