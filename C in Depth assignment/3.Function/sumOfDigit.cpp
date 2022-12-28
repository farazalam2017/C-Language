/* Program to find sum of digit of any number */
#include <bits/stdc++.h>
using namespace std;
int sum(int n);

int main()
{
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    cout << "\n Sum of the number is :- " << sum(num1);
}

int sum(int n){
    int sum = 0;
    while( n > 0){
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}