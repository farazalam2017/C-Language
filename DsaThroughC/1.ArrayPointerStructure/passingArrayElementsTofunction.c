/* Passing individual elements to function */
#include<stdio.h>
int check(int num);
void main()
{
  int i, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (i = 0; i <= 9;i++)
  {
    check(arr[i]);
  }
}
int check(int num){
  if(num%2 == 0)
    printf("%d is Even\n",num);
    else
    printf("%d is Odd\n",num);
}