/* Program to find sum of two numbers */
#include <bits/stdc++.h>
using namespace std;
// Function definition
int addTwoNumbers(int x, int y){
    return (x + y);
}
int main(){
    int a, b, c;
    cout << "\n Enter the value of x:- ";
    cin >> a;
    cout << "\n Enter the value of y:- ";
    cin >> b;
    //Function call
    c = addTwoNumbers(a, b);
    cout << "Sum of two number is:- " << c << "\n";
    return 0;
}
