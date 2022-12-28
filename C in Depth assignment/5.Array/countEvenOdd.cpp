/* Program to count even and odd number */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, count1= 0, count2= 0;
    cout << "\n Enter the size of array:- ";
    cin >> num1;
    int arr[num1];
    for (int i = 0; i < num1; i++){
        cout << "\n Enter the value " << i + 1 << " th element:- ";
        cin >>arr[i];
        if(arr[i] % 2 == 0){
            count1++;
        }else{
            count2++;
        }
    }
    cout << "\n The number of even element in array are:- "<<count1;
    cout << "\n The number of odd element in array are:- "<<count2;

        return 0;
}