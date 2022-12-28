/* 
   A.)  Program to check for armstrong number.
 */
/* 
    Points to remember:-
    Armstrong number is a three digit number in which the sum of cubes is equal to the number.
    example:- 371 = 3*3*3+7*7*7+1*1*1= 27+343+1 = 371
 */
#include<stdio.h>
void main()
{
  int num, sum = 0, n, d, cube;
  printf(" Enter the number:- ");
  scanf("%d", &num);
  n = num;
  while (n!=0)
  {
    d= n % 10;
    cube = d * d * d;
    sum = sum + cube;
    n = n / 10;
  }
  if(num == sum)
  {
    printf("\n Entered number is armstrong");
  }else
  {
    printf("\n Entered number is not armstrong");
  }
  
}

/* B. To print armstrong number between 100 and 1000 */
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int num, sum , n , d ,cube;
    cout <<"\n Armstrong numbers are:- ";
    for (num = 100; num<=999; num++){
        n = num;
        sum = 0;
        while (n > 0){
            d = n %10;
            cube = d*d*d;
            n = n / 10;
            sum = sum + cube;
        }
        if(num == sum){
            cout << num << "\n";
        }
    }
        return 0;
}   

 */
