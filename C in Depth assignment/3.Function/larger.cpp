/*  
    Program to find the larger number
 */
#include <bits/stdc++.h>
using namespace std;
int largerNumber(int x, int y){
    return (x > y ? x : y);
}
int main(int){
    int a, b;
    cout << "\n Enter the first number:- ";
    cin >> a;
    cout << "\n Enter the second number:- ";
    cin >> b;
    cout << "\n Largest number between two number is:- " << largerNumber(a, b);
    return 0;
}