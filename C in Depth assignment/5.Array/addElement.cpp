/* Program to add element of array */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, sum = 0;
    cout <<"\n Enter the size of array:- ";
    cin >> num1;
    int arr[num1];
    for (int i = 0; i < num1; i++){
        cout << " The value of " << i + 1 << " th element is:- ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "\n Sum of entered element are:- " << sum;
    return 0;
}