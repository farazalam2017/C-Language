/* Program to reverse a number using recursion:-  */
#include <bits/stdc++.h>
using namespace std;
void Rdisplay(long int n);

int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    Rdisplay(num1);
    return 0;
}

void Rdisplay(long int n){
    if(n/10==0){
        cout << "" << n;
        return;
    }
    cout << n % 10;
    Rdisplay(n / 10);
}