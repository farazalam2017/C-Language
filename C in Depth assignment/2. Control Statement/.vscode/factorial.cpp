/* 
    Program to find the factorial of a number
 */
/* 
    Logic:-
        Factorial of a number n is the product of numbers from 1 to n.
        !n = n * (n-1) * (n-2) * (n-3)
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, num;
    long long int fact = 1;
    cout << "\n Enter the number";
    cin >> n;
    if(n < 0){
        cout << "\n Factorial of negative not exit";
    }else{
        while (n > 1 )
        {
            fact = fact * n;
            n--;
        }
        cout << "\n Factorial of number is:- " << fact;
    }
    return 0;
}

