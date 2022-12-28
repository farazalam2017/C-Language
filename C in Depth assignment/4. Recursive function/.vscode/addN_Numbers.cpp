/* Write a recursive function to add Numbers */
#include <bits/stdc++.h>
using namespace std;
int add(int n);

int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    cout << add(num1);
    return 0;
}

int add(int n){
    int sum = 0;
    if( n == 0)
    {
        return 0;
    }else{
        sum = n + add(n - 1);
        cout << n << "";
        return sum;
    }
}