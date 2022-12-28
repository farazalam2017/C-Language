/*
    Program to calculate HCF and LCM of a number.
 */
/*
    Points to remember:-
    Euclidean algorithm by subtraction:- it is algorithm to calculate HCF of a number.
    Pseudocode:- def gcd(a,b)
                 if( a==b)
                 return a;
                 if(a > b)
                    gcd(a-b, b);
                else
                    gcd(a,b-a);
    Relation between LCM and HCF of a number:- 
        HCF*LCM= Product of given two numbers i.e:- HCF*LCM=a*b;
 */
/* Logic:-
    To calculate HCF:-
        while( a!=0){
            if (a > b)
              a= a-b;
            else
              b= b-a;
        }
 */ 
/* 
    Working:- Let's take  a= 98, b = 56
            a > b => a = a - b= 98 - 56= 42
                a=42, b=56 => b > a => check- b % a ==0- (Here F)
                b = b - a => 56 - 42 = 14
                 a = 42, b= 14 => a > b=> a%b==0-> true, Hence smaller number is HCF, i.e is 14
 */
#include<stdio.h>
void main()
{
  int num1, num2;
  int a, b, LCM;
  printf(" Enter the two numbers:- ");
  scanf("%d%d", &num1, &num2);
  a = num1;
  b = num2;
  while (a!=b)
  {
    if(a > b)
    {
      a = a - b;
    }else
    {
      b = b - a;
    }
  }
  printf("\n HCF of number is:- %d", a);
  LCM = (num1 * num2) / a;
  printf("\n LCM of number is %d", LCM);
}