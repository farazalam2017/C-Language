/* Program to compare the memory allocated for a union and a structure variable */
#include<stdio.h>
struct stag{
  char c;
  int i;
  float f;
}svar;
union utag{
  char c;
  int i;
  float f;// float is of size 4
}uvar;

void main()
{
  printf("Size of svar (variable of structure)= %d\n", sizeof(svar));
  printf("Address of svar (variable of structure)= %p\t", &svar);
  printf("\nAddress of members:  %p  %p  %p\n", &svar.c, &svar.i, &svar.f);
  printf("Size of uvar (variable of union):- %d\n", sizeof(uvar));
  printf("Address of uvar:- %p\t", &uvar);
  printf("\nAddress of members:- %p  %p  %p\n", &uvar.c, &uvar.i, &uvar.f);
}
/* Conclusion:- 
    The address of members of union are same while the address of members of structures are different. The size of both union and structure may be affected by padding.
 */