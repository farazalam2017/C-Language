/* Passing individual array elements to a function */
#include<stdio.h>
int check(int num);
void main()
{
  int i, j, arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (i = 0; i <= 9;i++)
  {
    check(arr[i]);
  }
}
int check(int num){
  if(num %2 == 0)
    printf("\n %d is even number", num);
    else
    printf("\n %d is odd number", num);
}