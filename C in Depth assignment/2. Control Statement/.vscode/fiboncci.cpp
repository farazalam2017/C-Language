/* 
    Program to print fibonacci series
 */
/* 
    Things to remember:-
     1,1,2,3,5,8,13,34,55,89,------
     In this series each number is sum of the previous two numbers
 */
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    long long  int x= 0, y = 1, z, num;
    cout << "\n Enter the number of terms";
    cin >> num;
    for(int i = 1; i < num; i++){
        z = x + y;
        cout << z <<"\n";
        x = y;
        y = z;
    }
    return 0;
} */

/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int x =0, y = 1, z, num1;
    cout << "\n Enter the number of terms:- ";
    cin >> num1;
   for(int i = 1; i < num1; i++){
       z = x + y;
       cout << z <<"\n";
       x = y;
       y = z;
   }
        return 0;
} */

#include<stdio.h>
int main()
{
    int x = 0, y = 1, z, num1;
    printf(" Enter the number of terms:- ");
    scanf("%d", &num1);
    for (int i = 1; i <= num1; i++)
    {
        z = x + y;
        printf(" %d", z);
        x = y;
        y = z;
    }
    return 0;
}
