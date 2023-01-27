/* Program that uses an array of union to hold values at different data types */
/* Note:- Beside saving the memory, union can be helpful on other situation also. We can declare an array of union where each element of array can be used to hold values of different data type. */
#include<stdio.h>
union num{
  int i;
  long int l;
  float f;
  double d;
} arr[10]; // size of array will be 10*sizeof(double)
int main(void){
  arr[0].i = 12;
  arr[1].i = 40000;
  arr[2].f = 11.12;
  arr[3].d = 23.34;
  printf("%d\t", arr[0].i);
  printf("%ld\t", arr[1].i);
  printf("%f\t", arr[2].f);
  printf("%lf\t", arr[3].d);
}
