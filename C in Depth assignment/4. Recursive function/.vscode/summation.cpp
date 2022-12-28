/* Summation of number from 1 to n */
#include <bits/stdc++.h>
using namespace std;
int summation(int x);

int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    cout << summation(num1);
}

int summation(int n){
    int sum = 0;
    if( n == 0){
        return 0;
    }else{
        sum = n + summation(n - 1);
        cout << " " << n<< "\n ";
        return sum;
    }
}

    /* #include<bits/stdc++.h>
    using namespace std;
    int summation(int x);

    int main(){
        int num1;
        cout << " \n Enter the number:- ";
        cin >> num1;
        cout << "\n Summation of numbers is:- " << summation(num1);
        return 0;
    }

    int summation(int x){
        int sum = 0;
        if (x == 0){
            return 0;
        }else
        {
            sum = x + summation(x - 1);
            cout << "\n " << x;
            return sum;
        }
    } */