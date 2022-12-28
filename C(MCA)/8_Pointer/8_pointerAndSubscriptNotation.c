/* Program to print the value of array elements using pointer and subscript notation */

/*   1) In subscript notation address of an array elements is &arr[i] and its value is arr[i]
    2) In pointer notation address is (arr+i) and value is *(arr+i);
    Sometimes pointer notatio is more efficient than the subscript notation
*/
#include<stdio.h>
void main()
{
  int arr[5] = {3, 4, 5, 6, 7};
  int i = 0;
  for (i; i < 5;i++)
  {
    printf("Value of arr[%d]=", i);
    printf("%d\t", arr[i]);
    printf("%d\t", *(arr+i));
    printf("%d\t", *(i+arr));
    printf("%d\n", i[arr]);
    printf("Address of arr[%d]= %p\n", i, &arr[i]);
  }
}