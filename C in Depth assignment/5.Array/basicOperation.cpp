/* Reading, Displaying, and adding elements in array */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    cout << "\n Enter the size of array:- ";
    cin >> num1;
    int arr[num1];
    for (int i = 0; i < num1; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < num1; i++){
        cout << " \n" << arr[i];
    }
    // cout << arr[6];
    int sum = 0;
    for (int i = 0; i < num1;i++){
        sum = sum + arr[i];
    }
    cout <<"\nSum of entered number is :- "<< sum;

    return 0;
}