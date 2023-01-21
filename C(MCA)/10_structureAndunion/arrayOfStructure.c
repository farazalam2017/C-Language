/* Array of Structures */
#include<stdio.h>
struct student{
  char name[20];
  int rollNo;
  char subject[50];
}stuarr[10];
void main()
{
  // struct student stuarr[10];
  int i;
  for (i = 0; i < 10;i++)
  {
    printf("Enter the %d name :- ",i+1);
    scanf("%s", &stuarr[i].name);
  
    printf("Enter the %d roll number:- ",i+1);
    scanf("%d",&stuarr[i].rollNo);
  
    printf("Enter the %d subject:- ",i+1);
    scanf("%s",&stuarr[i].subject);
  }
  printf("\n");
  printf("Name\tRoll Number\tSubject\n");
  for (i = 0; i < ;i++)
  {
    printf("%s\t%d\t\t%s\n", stuarr[i].name, stuarr[i].rollNo, stuarr[i].subject);
  }
}
/* 
To initilize directly
struct student stuarr[2]= {
  {"faraz",2,"hindi"}.
  {"pushkar",3,"english"}

}
 */
// #include<stdio.h>
// struct student{
//   char name[20];
//   int rollNo;
//   char subject[50];
// }stuarr[2]={
//   {"faraz",1,"hindi"},
//   {"amit",2,"english"}
// };
// void main()
// {
//   // struct student stuarr[10];
//   int i;
//   for (i = 0; i < 2 ;i++)
//   {
//     printf("%s\t%d\t\t%s\n", stuarr[i].name, stuarr[i].rollNo, stuarr[i].subject);
//   }
// }