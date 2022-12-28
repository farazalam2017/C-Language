/*  
    Program to perform arithmetic calculation on integer using switch
*/
#include <bits/stdc++.h>
using namespace std;;
int main(){
    int num1, num2;
    char operand;
    cout << "\n Enter number 1:-";
    cin >> num1;
    cout << "\n Enter number 2:-";
    cin >> num2;
    cout << "\n Enter operand:-";
    cin >> operand;
    switch(operand){
        case '+':
            cout << num1 << "+" << num2 << "=" << num1 + num2;
            break;
        case '-':
            cout << num1 << "-" << num2 << "=" << num1 - num2;
            break;
        case '*':
            cout << num1 << "*" << num2 << "=" << num1 * num2;
            break;
        case '/':
            cout << num1 << "/" << num2 << "=" << num1 / num2;
            break;
        default:
            cout << "\n Error";
    }

    return 0;
} 