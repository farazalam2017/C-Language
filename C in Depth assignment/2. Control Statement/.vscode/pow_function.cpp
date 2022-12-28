/* 
    Write a program to find out the value of x raised to power y, where x and y are posiive integer.
 */
// Syntax:- double pow(double x, double y);
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y,num1;
    cout << "\n Enter the value of x:- ";
    cin >> x;
    cout << "\n Enter the value of y:- ";
    cin >> y;
    num1 = pow(x, y);
    cout << "\n 'x' raised to power  'y' is :- "<< num1 << "\n";
}