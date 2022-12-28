/* Program to input values into array and display them */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    cout << "\n Enter the size of array:- ";
    cin >> num1;
    int arr[num1];
    for (int i = 0; i < num1;i++){
        cout << "\n Enter the value of "<< i+1 <<"th element:- ";
        cin >> arr[i];
    }
    cout << " \n The array elements are:- ";
    for (int i = 0; i < num1;i++){
        cout << " \n The value of " << i + 1 << " element is:- " << arr[i];
    }

        return 0;
}