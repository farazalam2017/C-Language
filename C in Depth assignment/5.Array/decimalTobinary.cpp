/* To convert decimal to binary */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, i, j;
    int arr[15];
    cout << "\n Enter the number:- ";
    cin >> num;
    i = 0;
    while (num > 0)
    {
        arr[i] = num % 2;
        num = num / 2;
        i++;
    }
    cout <<"\n Binary number is:- ";
    for (j = i - 1; j >= 0; j--){
        cout << arr[j] << " ";
    }
}