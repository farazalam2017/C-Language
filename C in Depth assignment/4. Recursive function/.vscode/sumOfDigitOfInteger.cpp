/* Sum of digit of an integer and displaying an integer  sequence of character */

#include<bits/stdc++.h>
using namespace std;
int sumDigits(long int n);
int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    cout << "\n Sum of digits of entered number is:- " << sumDigits(num1);
}

int sumDigits(long int n){
    if(n == 0){
        return 0;
    }else{
        return (n % 10 + sumDigits(n / 10));
    }
}
/* #include <bits/stdc++.h>
using namespace std;

int sumDigits(long int n){
    if( n/10 == 0)
        return n;
    return n % 10 + sumDigits(n / 10);
}

void display(long int n){
    if(n /10 == 0)
    {
        cout << n;
        return;
    }
    display(n / 10);
    cout << n % 10;
}

void rDisplay(long int n){
    if(n/10 == 0){
        cout << n;
        return;
    }
    cout << n % 10;
    rDisplay(n / 10);
}
int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    cout << display(num1);

    return 0;
} */