/* Write a function cubeSum() that accept an integer and returns the sum of cube of individual digit of that number.Use this function PrintArmstrong() and isArmstrong() to print the Armstrong number and find whether number is an Armstrong number.  */

#include <bits/stdc++.h>
using namespace std;

int cubeSum(int x1);
int printArmstrong(int x2);
int isArmstrong(int x3, int x4);

int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    int z = cubeSum(num1);
    isArmstrong( z,num1);
    return 0;
}



int cubeSum(int x1){
    int sum = 0, num2;
    x1 = num2;
    while(x1 != 0){
        int d = x1 % 10;
        sum = sum + (d * d  *d);
        x1 = x1 / 10;
    }
    return sum;
}

int isArmstrong(int x3, int x4){
    if( x3 == x4){
        cout << " it is Armstrong number: ";
    }else{
        cout << " not a armstrong number ";
    }
    return 0;
}