/* Passing individual elements to function */
#include<stdio.h>
int check(int []);
void main()
{
  inr arr[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5;i++)
  {
    printf("Number is:- %d", i);
    check(arr[i]);
  }
  int check(int arr[]){
    if(arr == 0)
      printf("Number is even");
      else
      printf("Number is odd");
  }
}