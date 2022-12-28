/* Progran to print the value and address of elements of an array*/
/* Note:-
  1) In subscript notation address of an array elements is &arr[i] and its value is arr[i]
  2) In pointer notation address is (arr+i) and value is *(arr+i);
  Sometimes pointer notatio is more efficient than the subscript notation
 */
#include<stdio.h>
void main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("\n Value of arr[%d]= %d\t", i, arr[i]);
    printf("\n Value of arr[%d]= %d\t", i, *(arr+i));// Pointer notation
    printf("\n Address of arr[%d]= %p\t",i, &arr[i]);
    printf("\n Address of arr[%d]= %p\t",i, arr+i);//Pointer notation
  }
} 