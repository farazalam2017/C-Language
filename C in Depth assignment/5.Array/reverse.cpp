/* Program to reverse an array */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[20];
    for (int i = 0; i < 10;i++){
        arr[i] = i + 1;
    }
    /* for (int i = 0; i < 10;i++){
        cout << "\n Value at index  " << i << "th is " << arr[i];
    } */
    for (int i = 9; i >= 0; i--){
        cout << arr[i]<<" ";
    }
        return 0;
}
